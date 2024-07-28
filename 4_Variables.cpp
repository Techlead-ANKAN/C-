// Variables in C++

// Variables are like containers for storing data values.

// There are different types of variables:

// 1) int   -->     Stores integers (whole numbers), without decimals
// 2) double    -->     Stores floating point numbers with decimal points
// 3) char  -->     Stores single characters within single quotes
// 4) string    -->     Stores texts within double quotes
// 5) bool  -->     Stores values of two states wither true or false


// Decalring variables:

// Syntax:  
// <type> <variable_name> = <value>;

# include <iostream>
using namespace std;

int main() {

// Example:
int a = 45;
string txt = "Hello coders";
double b = 45.568;
bool x = true;
char c = 'a';


// Printing all the variables
cout<<"Value of a = "<<a<<"\n";
cout<<"Value of txt = "<<txt<<"\n";
cout<<"Value of b = "<<b<<"\n";
cout<<"Value of x = "<<x<<"\n";
cout<<"Value of c = "<<c<<"\n";
    
}


// C++ Identifiers 

// 1) All C++ variables must be unique
// 2) These uniques names are called "Identifiers"


// The general rules for naming variables are:

// 1) Names can contain letters, digits and underscores
// 2) Names must begin with a letter or an underscore (_)
// 3) Names are case-sensitive (myVar and myvar are different variables)
// 4) Names cannot contain whitespaces or special characters like !, #, %, etc.
// 5) Reserved words (like C++ keywords, such as int) cannot be used as names



// Constants

const int a = 15;   // The value of a will always be 15 it cannot be changed, since it has been declared constant.
