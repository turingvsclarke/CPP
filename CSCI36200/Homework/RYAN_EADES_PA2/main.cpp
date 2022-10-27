//main.cpp
#include "Node.cpp"
#include "bst.cpp"
#include<iostream>
#include<algorithm>
#include<array>
int main() {	
	
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
	n8.rc=&n12;
	n12.p=&n8;
	n8.lc=&n4;
	n4.p=&n8;
	n4.lc=&n2;
	n2.p=&n4;
	n2.lc=&n1;
	n1.p=&n2;
	n2.rc=&n3;
	n3.p=&n2;
	n4.rc=&n6;
	n6.p=&n4;
	n6.lc=&n5;
	n5.p=&n6;
	n6.rc=&n7;
	n7.p=&n6;
	n12.lc=&n10;
	n10.p=&n12;
	n10.lc=&n9;
	n9.p=&n10;
	n10.rc=&n11;
	n11.p=&n10;
	n12.rc=&n14;
	n14.p=&n12;
	n14.lc=&n13;
	n13.p=&n14;
	n14.rc=&n15;
	n15.p=&n14;
	bst t=bst();
	t.root=&n8;
	t.root=&n1;
	t.root=&n4;
	t.getMin();
	t.getMax();
	std::cout<<t.getMin()<<std::endl;
	std::cout<<t.getMax()<<std::endl;	
	/***
	t.insert(5);
	t.root->print();
	std::cout<<"The minimum value of the tree is "<<t.getMin()<<std::endl;
	std::cout<<"The maximum value of the tree is "<<t.getMax()<<std::endl;
	/***
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
	***/

} // end main
