#include <iostream>
using namespace std;

namespace myMethods
{
    void display()
    {
        cout << "Hello, this is the display method from myMethods namespace!" << endl;
    }
}

int main()
{
    myMethods::display();
    return 0;
}