#include<iostream>
#include<string>
using namespace std;

class Teacher{
    //proprieties & attributes
    public:
    string name;
    string subject;
    string dept;
    double salary;
    int choice;

    void changeDept(string newDept){
        dept = newDept;
    }
    void displayInfo(){
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Department: " << dept << endl;
        cout << "Salary: $" << salary << endl;
        cout <<"if you want to change the department then press 1: ";
        cin >> choice;
        if(choice == 1){
            string newDept;
            cout << "Enter the new department: ";
            cin >> newDept;
            changeDept(newDept);
        }
    }
};
int main(){
    Teacher t1; //object of class Teacher
    t1.name = "John Doe";
    t1.subject = "Mathematics";
    t1.dept = "Computer Science";
    t1.salary = 50000.0;

    t1.displayInfo();

   
    return 0;

}