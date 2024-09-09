#include <iostream>
#include <string>

using namespace std;

// Creating a class name "Teacher"
class Teacher{

private:
    double salary;


public:
    // Attributes / Properties
    string name;
    string dept;
    string subject;

    // Methods / Member Functions
    void change_dept(string newDept)
    {
        dept = newDept;
    }


    // getters
    double getSalary(){
        return salary;
    }

    // setters
    void setSalary(double newSalary){
        salary = newSalary;
    }
};


int main() {
    
    // Creating instances of class Teacher
    Teacher t1;

    t1.name = "Code With Harry";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    t1.setSalary(50000);

    cout<<t1.name<<"\n";
    cout<<t1.subject<<"\n";
    cout<<t1.dept<<"\n";
    cout<<t1.getSalary()<<"\n";

    t1.change_dept("Information Technology");
    cout<<t1.dept<<"\n";


}