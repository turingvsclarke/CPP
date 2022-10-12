// Node.h

#ifndef NODE_H_EXISTS
#define NODE_H_EXISTS


class Node{
	public:
		Node *p, *rc, *lc; // parent and children of the nodes
		int value; // value of the node's key
		Node(); //Null constructor
		Node(int v); // constructor to create a node with a given value
		void print();
		// Node Tree(int values[],int size);
}; // end class def

#endif
