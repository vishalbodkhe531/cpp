#include <iostream>
using namespace std;

int main()
{
    int number = 123;
    int rem = 0, count = 0;

    while (number != 0)
    {
        rem = number % 10;
        count = ((count * 10) + rem);
        number = number / 10;
    }

    cout << count;
    cout << endl;
    return 0;
}