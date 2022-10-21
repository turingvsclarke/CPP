#include<iostream>
#include<algorithm>

int badIdea(){
	// This will return a value, but never delete the pointer, so it will forever be on heap
	int *ptr=new int(5);
	return 3*(*ptr);
}


int main(){
	// This is a bad thing to do. Don
	/*** This does not run. The program stops, which is not good if we've already allocated memory that is deallocated later
	// When initialized, p_number2 points to a random junk address(just like arrays get random values). That memory isn't ours, so the cpu won't let us store a value there 
	int *p_number2;
	
	*p_number2 = 55;
	std::cout<<"The dereferenced pointer has address: "<<std::endl;
	std::cout<<"The value at the dereferenced address is: "<<*p_number2<<std::endl;
	// This also doesn't work because p_number2 is assigned nullptr, which by definition means p_number2 points to no address, so how could we store a value where it points?
	int *p_number2=nullptr;
	***/
	// This finally does work
	int x=5;
	int *p_number2=&x;
	*p_number2 = 55;
	std::cout<<"The dereferenced pointer has address: "<<p_number2<<std::endl;
	std::cout<<"The value at the dereferenced address is: "<<*p_number2<<std::endl;
	
	
	// Storing variables on the heap
	int *ptr1;
	int *ptr2;
	ptr1=new int(5);
	
	ptr2=new int;
	*ptr2=134;
	
	std::cout<<"Value of ptr1: "<<ptr1<<std::endl;
	std::cout<<"Value of ptr2: "<<ptr2<<std::endl;
	std::cout<<"The first pointer points to: "<<*ptr1<<std::endl;
	std::cout<<"The second pointer points to: "<<*ptr2<<std::endl;
	// This is good practice 
	delete ptr1;
	delete ptr2;	
	// The ptrs still point to the same address location, but the values there are no longer dedicated to ints
	// This is basicallly the same as the above bad choices	
	std::cout<<"After deleting those pointers, they still have values"<<std::endl; 	
	std::cout<<"Value of ptr1: "<<ptr1<<std::endl;
	std::cout<<"Value of ptr2: "<<ptr2<<std::endl;
	std::cout<<"The first pointer points to: "<<*ptr1<<std::endl;
	std::cout<<"The second pointer points to: "<<*ptr2<<std::endl;
	
	ptr1=nullptr;
	ptr2=nullptr;
	ptr2=new int(81);	
	std::cout<<"Value of ptr1: "<<ptr1<<std::endl;
	std::cout<<"Value of ptr2: "<<ptr2<<std::endl;
	/*** This seg faults b/c nllptr assignment
	
	std::cout<<"The first pointer points to: "<<*ptr1<<std::endl;
	***/
	std::cout<<"The second pointer points to: "<<*ptr2<<std::endl;
	delete ptr2;
	// delete ptr2;
		
	badIdea();


	// Dangling pointers
	std::cout<<"Dangling pointers"<<std::endl;
	int *p1;
	// This won't run. The memory isn't allocated to p1 so p1 points to a random, probably already reserved 
	// memory space. The cpu won't let us access such space(if we could, we could modify it's value+that'd be disastrous)
	// std::cout<<*p1<<std::endl;
	p1=new int(5);
	std::cout<<"*p1 before delete: "<<*p1<<std::endl;
	delete p1;
	// This works now. But if p1 points to occupied memory, this will halt the program
	std::cout<<"*p1 after delete: "<<*p1<<std::endl;

	std::cout<<"The program got to the end"<<std::endl;
} // end maind
