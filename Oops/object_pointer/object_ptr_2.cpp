#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    string name;

    Student(int id, string name)
    {
        this->id = id;
        this->name = name;
    }

    void printData()
    {
        cout << this->id << endl
             << this->name << endl
             << endl;
    }
};

int main()
{
    Student obj(1, "ram");

    obj.printData();

    Student *obj2 = new Student(2, "sita");

    // (*obj2).printData();
    obj2->printData();

    // Freeing allocated memory
    delete obj2;

    return 0;
}
