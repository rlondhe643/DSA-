#include <iostream>
#include <string>
using namespace std;

// ======================================================
// 1. SINGLE INHERITANCE
// ======================================================

class Person1
{
public:
    string name;
    int age;

    Person1(string n, int a)
    {
        name = n;
        age = a;
    }
};

class Student1 : public Person1
{
public:
    int rollNo;

    Student1(string n, int a, int r) : Person1(n, a)
    {
        rollNo = r;
    }

    void getInfo()
    {
        cout << "\n--- Single Inheritance ---" << endl;
        cout << "Name    : " << name << endl;
        cout << "Age     : " << age << endl;
        cout << "Roll No : " << rollNo << endl;
    }
};


// ======================================================
// 2. MULTILEVEL INHERITANCE
// ======================================================

class Person2
{
public:
    string name;
    int age;
};

class Student2 : public Person2
{
public:
    int rollNo;
};

class GraduateStudent : public Student2
{
public:
    string researchArea;

    void getInfo()
    {
        cout << "\n--- Multilevel Inheritance ---" << endl;
        cout << "Name          : " << name << endl;
        cout << "Age           : " << age << endl;
        cout << "Roll No       : " << rollNo << endl;
        cout << "Research Area : " << researchArea << endl;
    }
};


// ======================================================
// 3. MULTIPLE INHERITANCE
// ======================================================

class Student3
{
public:
    string studentName;
    int rollNo;
};

class Teacher3
{
public:
    string subject;
    int salary;
};

class TA : public Student3, public Teacher3
{
public:
    void getInfo()
    {
        cout << "\n--- Multiple Inheritance ---" << endl;
        cout << "Name    : " << studentName << endl;
        cout << "Roll No : " << rollNo << endl;
        cout << "Subject : " << subject << endl;
        cout << "Salary  : " << salary << endl;
    }
};


// ======================================================
// 4. HIERARCHICAL INHERITANCE
// ======================================================

class Person4
{
public:
    string name;
    int age;
};

class Student4 : public Person4
{
public:
    int rollNo;

    void getStudentInfo()
    {
        cout << "\n--- Hierarchical Inheritance - Student ---" << endl;
        cout << "Name    : " << name << endl;
        cout << "Age     : " << age << endl;
        cout << "Roll No : " << rollNo << endl;
    }
};

class Teacher4 : public Person4
{
public:
    string subject;

    void getTeacherInfo()
    {
        cout << "\n--- Hierarchical Inheritance - Teacher ---" << endl;
        cout << "Name    : " << name << endl;
        cout << "Age     : " << age << endl;
        cout << "Subject : " << subject << endl;
    }
};


// ======================================================
// 5. HYBRID INHERITANCE
// ======================================================

class Person5
{
public:
    string name;

    void getName()
    {
        cout << "Name : " << name << endl;
    }
};

class Student5 : virtual public Person5
{
public:
    int rollNo;

    void getStudent()
    {
        cout << "Roll No : " << rollNo << endl;
    }
};

class Teacher5 : virtual public Person5
{
public:
    string subject;

    void getTeacher()
    {
        cout << "Subject : " << subject << endl;
    }
};

class College : public Student5, public Teacher5
{
public:
    void display()
    {
        cout << "\n--- Hybrid Inheritance ---" << endl;
        getName();
        getStudent();
        getTeacher();
    }
};


// ======================================================
// MAIN FUNCTION
// ======================================================

int main()
{
    // --------------------------------------------------
    // 1. SINGLE INHERITANCE
    // --------------------------------------------------

    Student1 s1("Rupesh Londhe", 21, 322);
    s1.getInfo();


    // --------------------------------------------------
    // 2. MULTILEVEL INHERITANCE
    // --------------------------------------------------

    GraduateStudent gs;

    gs.name = "Rupesh Londhe";
    gs.age = 21;
    gs.rollNo = 322;
    gs.researchArea = "Artificial Intelligence";

    gs.getInfo();


    // --------------------------------------------------
    // 3. MULTIPLE INHERITANCE
    // --------------------------------------------------

    TA ta;

    ta.studentName = "Rupesh";
    ta.rollNo = 322;
    ta.subject = "C++";
    ta.salary = 25000;

    ta.getInfo();


    // --------------------------------------------------
    // 4. HIERARCHICAL INHERITANCE
    // --------------------------------------------------

    Student4 s4;

    s4.name = "Rupesh";
    s4.age = 21;
    s4.rollNo = 322;

    s4.getStudentInfo();


    Teacher4 t4;

    t4.name = "John Doe";
    t4.age = 35;
    t4.subject = "Mathematics";

    t4.getTeacherInfo();


    // --------------------------------------------------
    // 5. HYBRID INHERITANCE
    // --------------------------------------------------

    College c1;

    c1.name = "Rupesh";
    c1.rollNo = 322;
    c1.subject = "C++";

    c1.display();


    return 0;
}