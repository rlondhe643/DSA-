// #include <iostream>
// #include <string>
// using namespace std;

// class Person
// {
// public:
//     string name;
//     int age;

//     Person(string name, int age)
//     {
//         this->name = name;
//         this->age = age;
//     }

// };
// class Student : public Person
// {

// public:
//     int rollNo;
//     Student(string name, int age, int rollNo) : Person(name, age)
//     {
//         this->rollNo = rollNo;
//     }

//     void getInfo()
//     {
//         cout << "name : " << name << endl;
//         cout << "age : " << age << endl;
//         cout << "rollNo : " << rollNo << endl;
//     }
// };
// int main()
// {
//     Student s1("Rupesh Londhe", 21, 322);
//     s1.getInfo();
//     return 0;
// }


// Multilevel Inheritance //
// #include <iostream>
// #include <string>
// using namespace std;

// class Person
// {
// public:
//     string name;
//     int age;
// };
// class Student : public Person
// {

// public:
//     int rollNo;
 
// };
// class GraduateStudent : public Student
// {
//     public:
//     string researchArea;

// };
// int main()
// {
//    GraduateStudent gs;
//    gs.name = "Rupesh Londhe";
//     gs.age = 21;
//     gs.rollNo = 322;
//     gs.researchArea = "Artificial Intelligence";

//     cout << "name : " << gs.name << endl;
//     cout << "age : " << gs.age << endl; 
//     cout << "rollNo : " << gs.rollNo << endl;
//     cout << "researchArea : " << gs.researchArea << endl;
//     return 0;
// }


// multiple Inheritance //
// #include <iostream>
// #include <string>
// using namespace std;

// class Student{
    
//     public:
//     string name;
//     int rollNo;
// };
// class Teacher{
//     public:
//     string subject;
//     int salary;
// };
// class TA : public Student, public Teacher{
//     public:
//     void getInfo(){
//         cout << "name : " << name << endl;
//         cout << "rollNo : " << rollNo << endl;
//         cout << "subject : " << subject << endl;
//         cout << "salary : " << salary << endl;
//     }

// };

// int main()
// { TA t1;
//     t1.name = "Rupesh Londhe";
//     t1.rollNo = 322;
//     t1.subject = "Artificial Intelligence";
//     t1.salary = 50000;
//     t1.getInfo();
  
//     return 0;
// }


// Hierarchical Inheritance //


// #include <iostream>
// using namespace std;

// class Person
// {
// public:
//     string name;
//     int age;
    
// };
// class Student : public Person
// {
//     public:
//     int rollNo;
// };
// class Teacher : public Person{
//     public:
//     string subject;
// };
// int main()
// {
//     Student s1;
//     s1.name = "Rupesh Londhe";
//     s1.age = 21;
//     s1.rollNo = 322;

//     Teacher t1;
//     t1.name = "John Doe";
//     t1.age = 35;
//     t1.subject = "Mathematics";

//     cout << "Student Info:" << endl;
//     cout << "Name: " << s1.name << endl;
//     cout << "Age: " << s1.age << endl;
//     cout << "Roll No: " << s1.rollNo << endl;

//     cout << "\nTeacher Info:" << endl;
//     cout << "Name: " << t1.name << endl;
//     cout << "Age: " << t1.age << endl;
//     cout << "Subject: " << t1.subject << endl;

//     return 0;
// }


//hybrid Inheritance //

// #include <iostream>
// using namespace std;

// // Base class
// class Person
// {
// public:
//     string name;

//     void getName()
//     {
//         cout << "Name: " << name << endl;
//     }
// };

// // Derived class 1
// class Student : public Person
// {
// public:
//     int rollNo;

//     void getStudent()
//     {
//         cout << "Roll No: " << rollNo << endl;
//     }
// };

// // Derived class 2
// class Teacher : public Person
// {
// public:
//     string subject;

//     void getTeacher()
//     {
//         cout << "Subject: " << subject << endl;
//     }
// };

// // Multiple inheritance
// class College : public Student, public Teacher
// {
// public:
//     void display()
//     {
//         cout << "College Student/Teacher Information" << endl;
//     }
// };

// int main()
// {
//     College c1;

//     c1.Student::name = "Rupesh";
//     c1.rollNo = 322;
//     c1.subject = "C++";

//     c1.Student::getName();
//     c1.getStudent();
//     c1.getTeacher();
//     c1.display();

//     return 0;
// }
