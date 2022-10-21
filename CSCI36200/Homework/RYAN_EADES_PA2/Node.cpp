// The class where Nodes are actually made
#include<iostream>
#include<algorithm>
#include "Node.h"

Node::Node(int v){
	value = v;
	p = NULL;
	rc = NULL;
	lc = NULL;
} // end constructor

void Node::print(){
	// Print the current node's value and all its children's values
	std::cout<<"Node's value: "<<value<<std::endl;

	// Print the left subtree
	if(lc){
		std::cout<<"Value of left child: "<<lc->value<<std::endl;
		lc->print();
	} // end if
	else{
		std::cout<<"This node has no left child."<<std::endl;
	} // 

	// Print the right subtree
	if(rc){
		std::cout<<"Value of right child: "<<rc->value<<std::endl;
		rc->print();
	} // end if	
	else{
		std::cout<<"This node has no right child."<<std::endl;
	} // end else

	std::cout<<"Done printing node "<<value<<std::endl;

	// Tell the user we're moving on
	if(p){
		std::cout<<"Moving back to node "<<p->value<<std::endl;
		// Refer back to ancestors until there's still a left child
		Node c_node = *this;
		Node parent=*p;
		while(parent.rc==&c_node){
			Node parent = *(c_node.p);
			std::cout<<"Done with node "<<c_node.value<<", moving back to node "<<parent.value<<std::endl;
				c_node = parent;
		} // end while
		} // end if
	else{
		std::cout<<"Done printing"<<std::endl;
	} // end else

} // end print
