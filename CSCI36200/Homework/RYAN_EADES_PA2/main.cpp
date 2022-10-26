//main.cpp
#include "Node.cpp"
#include "bst.cpp"
#include<iostream>
#include<algorithm>
#include<array>
int main() {	
	/***
	Node n1=Node(65);
	Node n2=Node(234);
	Node n3=Node(25);
	n3.lc=&n2;
	n2.p=&n3;
	n3.rc=&n1;
	n1.p=&n3;
	n3.print();
	***/
	bst t=bst();
	int values[]={6,17,20,41,45,52,57,65,71,76,79,87,92,95,99};
	t.insert(20);
	std::cout<<"The root is "<<t.root->value<<std::endl;
	t.insert(17);
	t.insert(41);
	t.insert(6);
	t.insert(45);
	//t.insert(21);
	//t.insert(33);
	int x[]={21,33};
	//t.insertArray(x,2);
	std::cout<<t.root->value<<std::endl;
	//std::cout<<t.root->p<<std::endl;
	//std::cout<<t.root->rc->lc->lc->value<<std::endl;
	//t.root->print();
} // end main
