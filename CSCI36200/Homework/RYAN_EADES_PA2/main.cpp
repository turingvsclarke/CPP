//main.cpp
#include "Node.cpp"
#include "bst.cpp"
#include<iostream>
#include<algorithm>
#include<array>

void insertArray(Node arr[],int length, bst p){
	std::cout<<"The value at the beginning of the array is "<<(*arr).value<<std::endl;
	// Find the middle of the array
	std::cout<<"The array is: ";
	for(int i=0;i<length;i++){
		std::cout<<arr[i].value;
		if(i+1==length){
			std::cout<<std::endl;
		}
		else{
			std::cout<<",";
		}
	}
	if(length>2){
		int midIndex=floor(length/2);
		//Node mid=arr[midIndex];
		p.insert(arr[midIndex]);		
		//root->print();	
		insertArray(arr,midIndex,p);
		insertArray(arr+midIndex+1,length-midIndex-1,p);
		
	}else{
		if(length>0){
			p.insert(arr[0]);
			//root->print();
		}
		if(length==2){
			p.insert(arr[1]);
			//root->print();
		} // end if
	} // end else
} // end insertArray
	



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
	/***	
	std::cout<<"Printing the result of inserting an array\n\n\n\n"<<std::endl;
	bst s=bst();
	std::cout<<"The max of the tree is: "<<s.getMax().value<<std::endl;
	std::cout<<"The min of the tree is: "<<s.getMin().value<<std::endl;
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
	std::cout<<"The max of the tree is: "<<s.getMax().value<<std::endl;
	std::cout<<"The min of the tree is: "<<s.getMin().value<<std::endl;
	******/
	/******* TESTING THE ARRAY INSERTION METHOD ********/
	Node arr[]={n2,n1,n3};
	Node arr1[1];
	bst p=bst();
	p.insert(arr[0]);
	p.insert(arr[1]);
	p.insert(arr[2]);
	/***	
	for(int i=0;i<3;i++){
		p.insert(arr[i]);
	}
	***/
	p.root->print();
	/***
	int values[]={6,17,20,41,45,52,57,65,71,76,79,87,92,95,99};
	Node nodes[sizeof(values)/sizeof(values[0])];
	for(int i=0;i<sizeof(values)/sizeof(values[0]);i++){
		Node node=Node(values[i]);
		nodes[i]=node;
	}
	p.insertArray(nodes,sizeof(values)/sizeof(values[0]));
	p.root->print();
	***/
} // end main
