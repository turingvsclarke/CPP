// bst.cpp
#include "bst.h"
#include<algorithm>
#include<iostream>

bst::bst(std::vector<Node*> &nodes,int size){
	int root_loc = (size-1)/2;
	root = nodes[root_loc];

	// If there are values to the left of this subtree's root, keep creating more subtrees
	if(root_loc>0){
		// Construct a bst using the left values
		std::vector<Node*> lvalues;
		for(int i=0;i<root_loc;i++){
			lvalues.push_back(nodes[i]);
		} // end for
		//lvalues.insert(lvalues.begin(),nodes.begin(),nodes.begin()+root_loc);
		bst bstL = bst(lvalues,lvalues.size());
		
		// Assigning the left child for the bst
		root->lc=bstL.root;
		bstL.root->p=root;
		/***
		// Construct a bst using the right values
		std::vector<Node*> rvalues;
		for(int i=root_loc;i<size;i++){
			rvalues.push_back(nodes[i]);
		} // end for
		//rvalues.insert(rvalues.begin(),nodes.begin()+root_loc+1,nodes.begin()+size-1);
		bst bstR = bst(rvalues,rvalues.size());
		// Linking the right child for the bst
		root->rc=bstR.root;
		root->lc->p=root;
		***/
	} // end if
	//root->print();
} // end constructor
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
