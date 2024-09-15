#include <iostream>
using namespace std;

int main()
{
    int number = 5;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}