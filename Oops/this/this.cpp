#include <iostream>
using namespace std;

class Cricketer
{
public:
    string name;
    int runs;

    Cricketer() {};

    Cricketer(string name, int runs)
    {
        this->name = name;
        this->runs = runs;
    }
};

void printValues(Cricketer obj)
{
    cout << obj.name << endl;
    cout << obj.runs << endl
         << endl;
}

int main()
{
    Cricketer obj1;
    obj1.name = "Virat Kohli";
    obj1.runs = 25000;

    Cricketer obj2("Rohit Sharma", 12000);

    printValues(obj1);
    printValues(obj2);

    return 0;
}