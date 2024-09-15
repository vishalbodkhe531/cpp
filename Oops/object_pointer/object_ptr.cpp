#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    string userName;
    int age;

    Student(int id, string name, int age)
    {
        this->id = id;
        this->userName = name;
        this->age = age;
    }

    void printData()
    {
        cout << this->userName << endl
             << this->age << endl
             << this->id << endl
             << endl;
    }

    void changData(Student *data)
    {
        (*data).userName = "tester";
    }
};

int main()
{
    Student obj(1, "vishal", 19);
    obj.printData();
    obj.changData(&obj);
    obj.printData();
    return 0;
}