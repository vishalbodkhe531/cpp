#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    string name;
    string email;
    int age;

    // we can make multiplies constructors

    Student() {} //==> It default contructor

    // constuctor overloading

    Student(int i, string n, string e, int a) // parameterise constructor & it reduce initialisation
    {
        id = i;
        name = n;
        email = e;
        age = a;
    }

    Student(int i, string n, string e)
    {
        id = i;
        name = n;
        email = e;
    }
};

int main()
{

    // we can use 2 way.. if we have use 2 way so in that case use have requird to use default constructor
    Student studentData1(1, "vishal", "vishal@gmail.com", 19);

    studentData1.age = 20;

    Student studentData2;
    studentData2.id = 123;
    studentData2.name = "ram";
    studentData2.email = "ram@gmail.com";
    studentData2.age = 16; //// we can be overight value without default constructor;

    Student studentData3(1, "tushar", "tushar@gmail.com");

    Student studentData4 = studentData1; // Copy constructors
    studentData4.name = "pratik";        // deep copy... means this value does change in studentData4 it not reflect on studentData1;

    cout << studentData3.id << endl
         << studentData3.name << endl
         << studentData3.email << endl
         << studentData3.age << endl
         << endl; // here store garbage value;

    cout << studentData4.id << endl
         << studentData4.name << endl
         << studentData4.email << endl
         << studentData4.age << endl;

    return 0;
}