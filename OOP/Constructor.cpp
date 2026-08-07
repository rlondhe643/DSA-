#include <iostream>
using namespace std;

class Student {
    int age;
    string name;

public:
    // 1. Default Constructor
    Student() {
        age = 0;
        name = "Unknown";
        cout << "Default Constructor called" << endl;
    }

    // 2. Parameterized Constructor
    Student(int age, string name) {
        this->age = age;
        this->name = name;
        cout << "Parameterized Constructor called" << endl;
    }

    // 3. Copy Constructor
    Student(const Student &s) {
        this->age = s.age;
        this->name = s.name;
        cout << "Copy Constructor called" << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {

    // Default constructor
    Student s1;
    s1.display();

    cout << endl;

    // Parameterized constructor
    Student s2(20, "Rupesh");
    s2.display();

    cout << endl;

    // Copy constructor
    Student s3 (s2);
    s3.display();

    return 0;
}