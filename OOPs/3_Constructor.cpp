// Constructor - It is a special method that is invoked automaticall at the time of object creation. Use for initialisation.

// 1) It has same name as the class
// 2) It does not have any return type
// 3) It is only called once during the time of object creation.
// 4) memory allocation occurs only at the time of object creation not during the class creation
// 5) There are 3 types of Constructors: -  (a) Parameterised Constructor
                                         // (b) Non-Parameterised Constructor
                                         // (c) Copy Constructor

#include <iostream>
#include <string>
using namespace std;

class Sample_Class{

public:

    // Attributes 
    string name;

// Non-Parameterised Constructor
    // Sample_Class(){
    //     cout<<"Hi, I am a non-parameterised constructor"<<endl;
    // }

// Parameterised Constructor
    Sample_Class(string name){

        // Using this pointer -- This is a special pointer in c++ that points to the current object.
        this->name = name;
        
    }

    void get_info(){
        cout<<"Hi "<<name<<" it is a constructor"<<endl;
    }

// Custom Copy Constructor
Sample_Class(Sample_Class &orgObj){
    cout<<"I am custom copy constructor\n";
    this->name = orgObj.name;
}

};

int main() {

    // Sample_Class obj1;

    Sample_Class obj2("Ankan Maity");


    Sample_Class obj3(obj2);
    obj3.get_info();
}