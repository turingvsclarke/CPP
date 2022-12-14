// The class where Nodes are actually made
#include<iostream>
#include<algorithm>
#include "Node.h"

Node::Node(){
	value=0;
	p=nullptr;
	rc=nullptr;
	lc=nullptr;
}

Node::Node(int v){
	value = v;
	p = nullptr;
	rc = nullptr;
	lc = nullptr;
} // end constructor

void Node::print(){
	// Print the current node's value and all its children's values
	std::cout<<"Node's value: "<<Node::value<<std::endl;
	
	// Print the left subtree
	if(lc){
		std::cout<<"Value of left child: "<<Node::lc->value<<std::endl;
		Node::lc->print();
	} // end if
	else{
		std::cout<<"This node has no left child."<<std::endl;
	} 

	// Print the right subtree
	if(Node::rc){
		std::cout<<"Value of right child: "<<Node::rc->value<<std::endl;
		Node::rc->print();
	} // end if	
	else{
		std::cout<<"This node has no right child."<<std::endl;
	} // end else

	std::cout<<"Done printing node "<<value<<std::endl;

	// Tell the user we're moving on
	if(Node::p){
		std::cout<<"Moving back to node "<<Node::p->value<<std::endl;
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

