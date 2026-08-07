// 1.Compile time Polymorphism (Constructor Overloading)
// 2.run time Polymorphism (Function Overloading)

#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    Student(){
        cout << "Default Constructor called" << endl;
    }
    
    Student(string name){
        this->name = name;
        cout << "parameterized Constructor called" << endl;
    }
};


int main(){
    Student s1;
    Student s2("Rupesh Londhe");
    cout << "Name : " << s2.name << endl;
    return 0;
}
