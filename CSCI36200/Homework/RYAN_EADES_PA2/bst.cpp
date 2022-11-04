// bst.cpp
#include "bst.h"
#include "Node.h"
#include<algorithm>
#include<iostream>
#include<cmath>

bst::bst(){
	root = nullptr;
}
// This function has been tested and works. It fails if the function has no root. 
Node* bst::getMin(){
	Node* current=root;
	if(!current){
		return current;
	}
	while(current->lc){
		current=current->lc;
	}
	return current;
}
// This function has been tested and works
Node* bst::getMax(){
	Node* current=root;
	while(true){
		if(!current){
			return current;
		}
		else{
			current=current->rc;
		}
	}
}

void bst::insert(Node node){
	// Find a place for the node
	Node* current=bst::root;
	// If the root is a null pointer, make the root point to the new node
	if(!current){
		bst::root=&node;
		std::cout<<"Assigned the root the value "<<node.value<<std::endl;	
		return;
	}
	// Since the tree has a root, there should be some 
	while(true){
		// Check the left node then the right node
		// The node's value is less than our current node's, so it must be in its left subtree
		if(node.value<current->value){
			// Next time, compare the node to our current node's left child if it exists
			if(current->lc){
				current=current->lc;
			// If no left child exists, the node is the first thing less than our current node
			}else{
				current->lc=&node;
				node.p=current;
				return;
			} // end else
		// The node's value is greater than our current node, so it must be in its right subtreee
		}else{
			if(current->rc){
				current=current->rc;
			} else{
				current->rc=&node;
				node.p=current;
				return;
			} // end else
		} // end else
	} // end while
} // end insert


void bst::insertArray(Node arr[],int length){
	std::cout<<2+2<<std::endl;
	/***
	// Find the middle of the array
	if(length>2){
		int midIndex=floor(length/2);		
		Node mid=arr[midIndex];
		std::cout<<"The middle is "<<mid.value<<std::endl;
		bst::insert(mid);
		Node left[midIndex];
		Node right[length-midIndex-1];
		for(int i=0;i<length;i++){
			// Separate the array into two different arrays
			if(i<midIndex){
				//std::cout<<"Adding "<<arr[i]<<"to left"<<std::endl;
				left[i]=arr[i];
			} // end if
			else if(i>midIndex){
				//std::cout<<"Adding "<<arr[i]<<"to right"<<std::endl;
				right[i-midIndex-1]=arr[i];
			} // end else
		} // end for
		// Insert those arrays
		insertArray(left,midIndex);
		insertArray(right,length-midIndex-1);
	}else{
		if(length>0){
			std::cout<<"arr[0]---"<<arr[0].value<<std::endl;
			std::cout<<"arr[1]---"<<arr[1].value<<std::endl;
			bst::insert(arr[0]);
		}
			if(length==2){
			bst::insert(arr[1]);
			} // end if
	} // end else
	***/
} // end insertArray


/***
int bst::getSuccessor(int key){}
	// Get the node. If it has a right child, take the minimum of that tree

void bst::print(){
	// Print the left nodes, then root, then right
	// Print the left subtree
	if(root.lc){
		// Switch to the left subtree
		root = root->lc;	
		// Print that subtree
		print();
		std::cout<<root->value<<" is the left child of "<<c_root->value<<std::endl;
	}
	// Print the right subtree
	if(root.rc){
		// Switch to the right subtree
		root = root->rc;
		// Print that subtree
		print();
		std::cout<<(c_root->lc)->value<<" is the right child of "<<c_root->value<<std::endl;
	} // end if

	std::cout<<"Done printing node "<<root.value<<std::endl;
	// Move back up the ancestry as long as parents exist
	if(p){
		// Get the parent;
		
		while(){
			std::cout<<"Moving back to node "<<std::endl;

		} // end while
	} // end if 
	else{
		std::cout<<"Done printing"<<std::endl;
	}
} // end print
***/
