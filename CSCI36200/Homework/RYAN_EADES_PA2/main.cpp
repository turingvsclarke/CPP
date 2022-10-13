// main.cpp
#include "Node.h"
#include "bst.h"
//#include "TreeNode.h"
#include<iostream>
#include<algorithm>
#include<vector>
/***
TreeNode Tree(int values[],int size){
	// Create a new array
	int root_loc = (size-1)/2;
	int root_val = values[root_loc];
	TreeNode root(root_val);
	// Add the root to the array
	
	// If there are values to the left of this subtree's root, keep creating more subtrees
	if(root_loc>0){
		// Construct a bst using the left values
		int lvalues[root_loc];
		for(int i=0;i<root_loc;i++){
			lvalues[i]=values[i];
		}	
		// Get the array of nodes for the 
		TreeNode l_child = Tree(lvalues,root_loc);
		// Add that array to the current array
		root.lc=l_child;
		l_child.p=root;
		
		// Construct a bst using the right values
		int rvalues[root_loc];
		for(int i=root_loc+1;i<size;i++){
			rvalues[i-root_loc-1]=values[i];
		}
		TreeNode r_child = Tree(rvalues,root_loc);
		root.rc=r_child;	
		r_child.p=root;
		
	} // end if
	root.print();
	return root;
} // end Tree
***/
/***
bst(std::vector<Node> &nodes,int size){
	int root_loc = (size-1)/2;
	root = &(nodes[root_loc]);

	// If there are values to the left of this subtree's root, keep creating more subtrees
	if(root_loc>0){
		// Construct a bst using the left values
		std::vector<Node> lvalues;
		lvalues.insert(lvalues.begin(),nodes.begin(),nodes.begin()+root_loc);
		bst(lvalues,lvalues.size());
		
		// Assigning the left child for the bst
		root->lc=bstL.root;
		root->lc->p=root;
		
		// Construct a bst using the right values
		std::vector<Node> rvalues;
		rvalues.insert(rvalues.begin(),nodes.begin()+root_loc+1,nodes.begin()+size-1);
		bst bstR = bst(rvalues,rvalues.size());

		// Linking the right child for the bst
		root->rc=bstR.root;
		root->lc->p=root;
		
	} // end if
	//root->print();
} // end constructor
***/

int main(){
	int values[] = {3,4,5,15,18,19,25};
	std::vector<Node> n;
	std::vector<Node*> nodes;
	for(int i=0;i<7;i++){
		n.push_back(Node(values[i]));
		nodes.push_back(&(n[i]));
	} // end for

	// Create a way to generate the size automatically
	// int arraySize = sizeof(array)/sizeof(array[0]);
	bst t = bst(nodes,7);
	//root = nodes[3];
	t.root->print();
	std::cout<<t.root->lc->lc->p->value<<std::endl;
	

	/***
	Node n = *(t.root);
	
	std::cout<<n.value<<std::endl;	
	std::cout<<n.value<<std::endl;	
	std::cout<<n.value<<std::endl;	
	std::cout<<n.value<<std::endl;	
	std::cout<<n.value<<std::endl;	
	std::cout<<n.rc->value<<std::endl;	
	std::cout<<n.lc->value<<std::endl;	
	std::cout<<n.lc->lc->value<<std::endl;	
	std::cout<<n.value<<std::endl;	
	std::cout<<n.value<<std::endl;	
	std::cout<<n.value<<std::endl;	
	std::cout<<n.value<<std::endl;	
	std::cout<<n.value<<std::endl;	
	for(int i=0;i<t.Nodes.size();i++){
		std::cout<<t.Nodes[i].value<<std::endl;
	} // end for
	Node n = Node(5);
	n.print();
	Node nL = Node(3);
	Node nR = Node(7);
	Node nLL = Node(2);
	Node nRR = Node(8);
	nL.p = &n;
	nR.p = &n;
	n.rc = &nR;
	n.lc = &nL;
	nR.rc=&nRR;
	nL.lc=&nLL;
	nRR.p=&nR;
	nLL.p=&nL;
	***/
} // end main
