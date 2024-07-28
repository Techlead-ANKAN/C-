s// User Input in C++

// "cin" is a predefined variable that reads data from the keyboard with the extraction operator(>>).

// Example 1: 
/*
# include <iostream>
using namespace std;

int main() {
    int marks;
    
    cout<<"Enter your marks: ";     // Showing a prompt for for convenient user input taking.
    
    cin >> marks;   // Taking user input and storing it inside the variable "marks"
    
    cout<<"Marks = "<<marks;
}
*/

// Example 2:

# include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if (age >= 18){
        cout<<"Your are eligibe to vote";
    }
    else{
        cout<<"You are not eligible to vote";
    }
}