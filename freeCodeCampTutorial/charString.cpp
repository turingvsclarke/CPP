#include<iostream>
#include<stdio.h>
#include<ctype.h>

int main(){
	/************ ALPHA NUMERIC CHECK ******************/
	char keyboard[]="~!!@#$%^&*()_+=-0987654321][poiuytrewq;lkjhgfdsa/.,mnbvcxz<>?:";
	for(auto x:keyboard){
		std::cout<<x<<" : "<<isalnum(x)<<std::endl;
	}

	/*************** CHECKING FOR BLANKS, DIGITS, LOWER CASE LETTERS *********************/
	char string[]="6 Strings Down 4.7 (132) · Musical instrument store Plainfield, IN · (317) 837-1755 Open ⋅ Closes 8PM In-store shopping Kessler Strings No reviews · Musician (317) 475-0743 Online appointments";
	int blank_count=0;
	int lower_count=0;
	int digit_count=0;
	for(auto ch:string){
		if(isblank(ch)){
			blank_count++;
		}else if(isdigit(ch)){
			digit_count++;
		} else if(islower(ch)){
			lower_count++;
			toupper(ch);
		}
	} // end for

	std::cout<<string<<std::endl;
	std::cout<<"There are "<<blank_count<<" blank spaces"<<std::endl;
	std::cout<<"There are "<<lower_count<<" lower case characters"<<std::endl;
	std::cout<<"There are "<<digit_count<<" digits"<<std::endl;

	


	/************ TURNING ALL THE LOWER CASE INTO UPPER CASE **********/


}
