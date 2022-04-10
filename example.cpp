#include <iostream>
#include<stdio.h>
using namespace std;

class calculator
{
  	// Calling all the functions in public of this class.
	public:
  		int addition(int a, int b);
		calculator()
		{
			cout<<"Welcome to practice Zone";
		}
		~calculator(){}
};

int calculator :: addition(int a, int b)
{
	return (a + b);
}

//_____Single Inheritance______

class moreOps : public calculator
{
	public:
		int subtraction(int a, int b);
		int multiplication(int a, int b);
		int division(int a, int b);
	    int a,b;
	moreOps()
	{	
		cout<<endl<<"Enter 1st number: ";
		cin>>a;
		cout<<endl<<"Enter Second number: ";
		cin>>b;
		
	    cout<<endl<<"The value of addition is: "<<addition(a,b);
	    cout<<endl<<"The value of subtraction is: "<<subtraction(a,b);
		cout<<endl<<"The value of multiplication is: "<<multiplication(a,b);
		//cout<<endl<<"The value of division is: "<<division(a,b);
	}	
};

int moreOps :: subtraction(int a, int b){
	return (a-b);
}

int moreOps :: multiplication(int a, int b){
	return (a*b);
}

// int moreOps :: division(int a, int b){
// 	return (a/b);
// }

//________
int main()
{
	moreOps obj;
	return 0;
}
