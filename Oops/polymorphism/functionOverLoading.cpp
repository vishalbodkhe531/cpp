#include <iostream>
using namespace std;

class Loaing
{
public:
    void sum(int a, int b)
    {
        cout << a + b << endl
             << endl;
    }

    void sum(int a, int b, int c)
    {
        cout << a + b * b << endl
             << endl;
    }
};

int main()
{
    Loaing obj;
    obj.sum(1, 2);
    obj.sum(1, 2, 2);
    return 0;
}