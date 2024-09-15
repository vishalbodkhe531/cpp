#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    string userName;
    int age;

    Student(int id, string userName, int age)
    {
        this->id = id;
        this->userName = userName;
        this->age = age;
    }
    void print()
    {
        cout << this->userName << endl
             << this->age << endl
             << this->id << endl
             << endl;
    }
};

int main()
{

    Student obj(1, "prashant", 13);
    Student obj2(2, "pratik", 19);
    obj.print();
    obj2.print();
    return 0;
}