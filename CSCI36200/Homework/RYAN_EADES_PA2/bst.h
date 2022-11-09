// bst.h
#include "Node.h"
#include <algorithm>
#include <iostream>
#include <vector>
#ifndef BST_H_EXISTS
#define BST_H_EXISTS

class bst {
	public:
		Node *root;
		//std::vector<Node> Nodes;	

		bst(); // the constructor takes an array of values and creates a well-ordered bst
		Node getMax(); // this will return the maximum value for the tree
		Node getMin(); // this will return the minimum value for the tree
		void insert(Node value);
		void insertArray(Node arr[], int length);
		int getKMin(int k); // this will return the kth minimum for the tree
		int getSuccessor(int key); // This will return the successor of a given value
		Node getNodeByKey(int key);
		void print(); // This will print the bst
}; // end class def

#endif


