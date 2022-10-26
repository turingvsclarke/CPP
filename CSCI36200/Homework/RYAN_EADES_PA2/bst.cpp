// bst.cpp
#include "bst.h"
#include "Node.h"
#include<algorithm>
#include<iostream>
#include<cmath>

bst::bst(){
	// int root_loc = (size-1)/2;
	root = NULL;
}

int bst::getMin(){
	Node* current=root;
	while(current->lc){
		current=current->lc;
	}
	return current->value;
}

int bst::getMax(){
	Node* current=root;
	while(current->rc){
		current=current->rc;
	}
	return current->value;
}

void bst::insert(Node node){
	// Find a place for the node
	Node* current=root;
	if(!current){
		root=&node;
	}
	while(current){
		// Check the left node then the right node
		if(node.value<current->value){
			if(current->lc){
				current=current->lc;
			}else{
				current->lc=&node;
				node.p=current;
				current=NULL;
			} // end else
	
		}else{
			if(current->rc){
				current=current->rc;
			} else{
				current->rc=&node;
				node.p=current;
				current=NULL;
			} // end else
		} // end else
	} // end while
} // end insert

void bst::insertArray(int arr[],int length){
	// Find the middle of the array
	if(length>2){
		int midIndex=floor(length/2);		
		int mid=arr[midIndex];
		insert(Node(mid));
		int left[midIndex];
		int right[length-midIndex-1];
		for(int i=0;i<length;i++){
			// Separate the array into two different arrays
			if(i<midIndex){
				left[i]=arr[i];
			} // end if
			else if(i>midIndex){
				right[i-midIndex-1]=arr[i];
			} // end else
		} // end for
		// Insert those arrays
		insertArray(left,midIndex);
		insertArray(right,length-midIndex-1);
	}else{
		if(length>0){
			std::cout<<"arr[0]---"<<arr[0]<<std::endl;
			std::cout<<"arr[1]---"<<arr[1]<<std::endl;
			bst::insert(21);
		}
			if(length==2){
			//	insert(arr[1]);
			} // end if
	} // end else
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
