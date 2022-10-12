#include<iostream>

void Insertion_sort(int array[],int n){
{
	// We need a value representing the current key we're comparing and the index before it
	int temp,j;
	int steps = 0;
	// Compare each element to the one before it.
	for(int i=1; i<=n;i++)
	{
		temp = array[i];	
		j=i-1;
		
		while(array[j]>temp){
			array[j+1]=array[j];
			j--;
			steps++;
		} // end while

		array[j+1]=temp;

	} // end for

	std::cout<<"Data size: "<<n;
	std::cout<<"Steps needed: "<<steps;

}
} // end Insertion_sort


int main()
{ 
	int arr[100];
	int size=5;
	
	std::cout<<"\n Enter the array keys: \n";
	
	for(int i=1;i<=size;i++)
	{
		std::cout<<"\n Element "<<i<<" : ";		
		std::cin>>arr[i];
	} // end for

	

	Insertion_sort(arr,size);

	std::cout<<"\n Sorted in ascending order: \n";
	
	for(int i=1;i<=size;i++)
	{
		std::cout<<"\n Element "<<i<<" : "<<arr[i];		
	} // end for
	std::cout<<"\n";

} // end main
