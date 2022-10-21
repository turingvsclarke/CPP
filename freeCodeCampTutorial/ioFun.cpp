#include<iostream>
#include<ios>
#include<string>
#include<iomanip>

int main(){
	// CARRIAGE RETURN AND FLUSHES 
	std::cout<<"This is end line"<<std::endl;
	std::cout<<"This is flush"<<std::flush;
	std::cout<<"This is written after flush with a line return\n";
	std::cout<<"This is written after that with a line return AND endl\n"<<std::endl;
	// MAKING A PRETTY TABLE
	std::cout<<"Unformatted Table:"<<std::endl;
	std::cout<<"Lastname"<<" "<<"Firstname"<<" "<<"Age"<<std::endl;
	std::cout<<"Daniel"<<" "<<"Woods"<<" "<<"54"<<std::endl;
	std::cout<<"Stanley"<<" "<<"Parker"<<" "<<"34"<<std::endl;
	std::cout<<"Jordan"<<" "<<"Ball"<<" "<<"23"<<std::endl;
	std::cout<<"Joe"<<" "<<"Carr"<<" "<<"29"<<std::endl;
	std::cout<<"Izaiah"<<" "<<"Robinson"<<" "<<"19"<<std::endl;

	int col_width=16;	
	
	std::cout<<"\n\n\n\n\n"<<std::endl;
	std::cout<<"Formatted Table:"<<std::endl;
        std::cout<<std::setw(col_width)<<"Lastname"<<std::setw(col_width)<<"Firstname"<<std::setw(col_width)<<"Age"<<std::endl;
        std::cout<<std::setw(col_width)<<"Daniel"<<std::setw(col_width)<<"Woods"<<std::setw(col_width)<<"54"<<std::endl;
        std::cout<<std::setw(col_width)<<"Stanley"<<std::setw(col_width)<<"Parker"<<std::setw(col_width)<<"34"<<std::endl;
        std::cout<<std::setw(col_width)<<"Jordan"<<std::setw(col_width)<<"Ball"<<std::setw(col_width)<<"23"<<std::endl;
        std::cout<<std::setw(col_width)<<"Joe"<<std::setw(col_width)<<"Carr"<<std::setw(col_width)<<"29"<<std::endl;
        std::cout<<std::setw(col_width)<<"Izaiah"<<std::setw(col_width)<<"Robinson"<<std::setw(col_width)<<"19"<<std::endl;


	std::cout<<"\n\n\n\n\n"<<std::endl;
	std::cout<<std::left;
        std::cout<<"Formatted Table(left justified):"<<std::endl;
        std::cout<<std::setw(col_width)<<"Lastname"<<std::setw(col_width)<<"Firstname"<<std::setw(col_width)<<"Age"<<std::endl;
        std::cout<<std::setw(col_width)<<"Daniel"<<std::setw(col_width)<<"Woods"<<std::setw(col_width)<<"54"<<std::endl;
        std::cout<<std::setw(col_width)<<"Stanley"<<std::setw(col_width)<<"Parker"<<std::setw(col_width)<<"34"<<std::endl;
        std::cout<<std::setw(col_width)<<"Jordan"<<std::setw(col_width)<<"Ball"<<std::setw(col_width)<<"23"<<std::endl;
        std::cout<<std::setw(col_width)<<"Joe"<<std::setw(col_width)<<"Carr"<<std::setw(col_width)<<"29"<<std::endl;
        std::cout<<std::setw(col_width)<<"Izaiah"<<std::setw(col_width)<<"Robinson"<<std::setw(col_width)<<"19"<<std::endl;

	std::cout<<"\n\n\n\n\n"<<std::endl;
        std::cout<<std::left;
        std::cout<<"Formatted Table(left justified with a fill character):"<<std::endl;
	std::cout<<std::setfill('-');
        std::cout<<std::setw(col_width)<<"Lastname"<<std::setw(col_width)<<"Firstname"<<std::setw(col_width)<<"Age"<<std::endl;
        std::cout<<std::setw(col_width)<<"Daniel"<<std::setw(col_width)<<"Woods"<<std::setw(col_width)<<"54"<<std::endl;
        std::cout<<std::setw(col_width)<<"Stanley"<<std::setw(col_width)<<"Parker"<<std::setw(col_width)<<"34"<<std::endl;
        std::cout<<std::setw(col_width)<<"Jordan"<<std::setw(col_width)<<"Ball"<<std::setw(col_width)<<"23"<<std::endl;
        std::cout<<std::setw(col_width)<<"Joe"<<std::setw(col_width)<<"Carr"<<std::setw(col_width)<<"29"<<std::endl;
        std::cout<<std::setw(col_width)<<"Izaiah"<<std::setw(col_width)<<"Robinson"<<std::setw(col_width)<<"19"<<std::endl;

	// Internal justification does nothing automatically but with neg numbers
	std::cout<<"\n\n\n"<<"Internal justification"<<std::endl;
	std::cout<<std::internal;
	std::cout<<std::setfill('*');
	std::cout<<std::setw(10)<<-123<<std::endl;
	std::cout<<std::setw(10)<<-50<<std::endl;
	std::cout<<std::right;
	std::cout<<std::setfill(' ');

	// Boolalpha manipulation
	std::cout<<"\n\n\n"<<std::endl;
	bool b1=true;
	bool b2=false;
	std::cout<<"Booleans with no setting"<<std::endl;
	std::cout<<"True is: "<<b1<<std::endl;	
	std::cout<<"False is: "<<b2<<std::endl;
	std::cout<<std::boolalpha;
	std::cout<<"Boolalpha"<<std::endl;
	std::cout<<"True is: "<<b1<<std::endl;
        std::cout<<"False is: "<<b2<<std::endl;
	std::cout<<std::noboolalpha;
        std::cout<<"Noboolalpha(default)"<<std::endl;
        std::cout<<"True is: "<<b1<<std::endl;
        std::cout<<"False is: "<<b2<<std::endl;

	// Positive numbers
	std::cout<<"\n\n\n"<<"Positive sign"<<std::endl;
	std::cout<<std::showpos;
	std::cout<<"show pos"<<std::endl;
	std::cout<<56<<std::endl;
	std::cout<<std::noshowpos;
	std::cout<<"no show pos"<<std::endl;
	std::cout<<56<<std::endl;
	
	// Base 
	std::cout<<"\n\n\n"<<"Showing a number's base"<<std::endl;
	int x = 55;
	int y=-77;
	std::cout<<"default format: "<<x<<std::endl<<y<<std::endl;
	std::cout<<"dec: "<<std::dec<<x<<std::endl<<y<<std::endl;
	std::cout<<"hex: "<<std::hex<<x<<std::endl<<y<<std::endl;
	std::cout<<"oct: "<<std::oct<<x<<std::endl<<y<<std::endl;
	std::cout<<std::uppercase;
	std::cout<<"hex: "<<std::hex<<x<<std::endl<<y<<std::endl;

	// Number formats
	std::cout<<"\n\n\n\n"<<"Number Formats"<<std::endl;
	double b = 5;
	double c = 3.14e10;	

	std::cout<<"Normal: "<<b<<std::endl<<c<<std::endl;
	std::cout<<std::fixed;
	std::cout<<"Fixed dec: "<<b<<std::endl<<c<<std::endl;
	std::cout<<std::scientific;
	std::cout<<"Scientific notation: "<<b<<std::endl<<c<<std::endl;
	std::cout.unsetf(std::ios::scientific | std::ios::fixed);



	// Precision
	std::cout<<"\n\n\n"<<"Precision"<<std::endl;
	double a=3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
	std::cout<<"a (default precision) :"<<a<<std::endl;
	std::cout<<std::setprecision(10);
	std::cout<<"a (precision(10)) :"<<a<<std::endl;
	std::cout<<std::setprecision(20);
	std::cout<<"a (precision(20)) :"<<a<<std::endl;
	std::cout<<"The last five digits are garbage because double only has 15 bit support"<<std::endl;
	
	double d=34.1;
	double e=101.99;
	double f=12.0;
	int g=45;
	std::cout<<"noshowpoint: "<<std::endl;
	std::cout<<"d: "<<d<<std::endl;
	std::cout<<"e: "<<e<<std::endl;
	std::cout<<"f: "<<f<<std::endl;
	std::cout<<"g: "<<g<<std::endl;

	// Showpoint forces the number to be written in the set precision
	std::cout<<std::endl;
	std::cout<<std::setprecision(4);
	std::cout<<std::showpoint;
	std::cout<<"showpoint: "<<std::endl;
	std::cout<<"d: "<<d<<std::endl;
	std::cout<<"e: "<<e<<std::endl;
	std::cout<<"f: "<<f<<std::endl;
	std::cout<<"g: "<<g<<std::endl;
} // end main
