#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    string name;

    Student(int id, string name, float marks)
    {
        this->id = id;
        this->name = name;
        this->marks = marks;
    }

    float getData() /// Getter : We can get value from here !!!
    {
        return marks;
    }

    void setMarks(float marks) // setter : We can set value from here !!!
    {
        this->marks = marks;
    }

    void print()
    {
        cout << id << endl
             << name << endl
             << marks << endl
             << endl;
    }

private:
    float marks;
};

int main()
{
    Student obj1(1, "ram", 90.32);
    obj1.print();
    // cout << obj1.getData() << endl;
    obj1.setMarks(76.50);
    obj1.print();
    return 0;
}