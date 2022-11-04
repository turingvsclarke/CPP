//main.cpp
#include "Node.cpp"
#include "bst.cpp"
#include<iostream>
#include<algorithm>
#include<array>
int main() {	
	///********* THIS CREATES A BINARY TREE WITH THE VALUES GIVEN FOR THE ASSIGNMENT
	Node n1=Node(6);
	Node n2=Node(17);
	Node n3=Node(20);
	Node n4=Node(41);
	Node n5=Node(45);
	Node n6=Node(52);
	Node n7=Node(57);
	Node n8=Node(65);
	Node n9=Node(71);
	Node n10=Node(76);
	Node n11=Node(79);
	Node n12=Node(87);
	Node n13=Node(92);
	Node n14=Node(95);
	Node n15=Node(99);
	
	std::cout<<"Printing the result of inserting an array\n\n\n\n"<<std::endl;
	bst s=bst();
	s.insert(n8);
	s.insert(n12);
	s.insert(n4);
	s.insert(n2);
	s.insert(n1);
	s.insert(n3);
	s.insert(n6);
	s.insert(n5);
	s.insert(n7);
	s.insert(n10);
	s.insert(n9);
	s.insert(n11);
	s.insert(n14);
	s.insert(n13);
	s.insert(n15);
	
	s.root->print();
	Node arr[]={n1,n2};
	s.insertArray(arr,2);
	/***
	int values[]={6,17,20,41,45,52,57,65,71,76,79,87,92,95,99};
	Node nodes[sizeof(values)/sizeof(values[0])];
	for(int i=0;i<sizeof(values)/sizeof(values[0]);i++){
		Node node=Node(values[i]);
		nodes[i]=node;
	}
	bst p=bst();
	p.insertArray(nodes,sizeof(values)/sizeof(values[0]));
	***/
} // end main
