// C++ Operators

/*
Operators in C++ can be classified into 6 types:

Arithmetic Operators
Relational Operators
Logical Operators
Bitwise Operators
Assignment Operators
Ternary or Conditional Operators
*/

#include <iostream>
using namespace std;

int main() {
	
	int a = 10;
	int b = 20;
	
	
	// A) Arithmatic Operators
	
		// Binary OPerators 
	cout<<"A + B = "<<(a+b)<<"\n";
	cout<<"A - B = "<<(a-b)<<"\n";
	cout<<"A % B = "<<(a%b)<<"\n";
	cout<<"A * B = "<<(a*b)<<"\n";
	
		// Unary Operators
	a++;
	cout<<"A = "<<a<<"\n";

	b--;
	cout<<"B = "<<b<<"\n";
	
	cout<<"\n";
	cout<<"\n";

	
	
	int x = 10;
	int y = 20;
	
	// B) Relational Operator ( 0 --> False; 1 --> True ) 
	cout<<"X == Y = "<<(x==y)<<"\n";
	cout<<"X > Y = "<<(x>y)<<"\n";
	cout<<"X < Y = "<<(x<y)<<"\n";
	cout<<"X >= Y = "<<(x>=y)<<"\n";
	cout<<"X <= y = "<<(x<=y)<<"\n";
	cout<<"X != Y = "<<(x!=y)<<"\n";
	
	
	cout<<"\n";
	cout<<"\n";
	
	
	int p = 10;
	int q = 20;
	
	// C) Logical Operators 
	cout<<"P && Q = "<<(p&&q)<<"\n";
	cout<<"P || Q = "<<(p||q)<<"\n";
	cout<<"!Q = "<<(!q)<<"\n";
	cout<<"!P = "<<(!p)<<"\n";
	
	
}	