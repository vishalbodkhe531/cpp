#include <iostream>
using namespace std;

int main()
{
    int number = 5;

    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            // cout << " ";
            if (j <= number - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
            // else
            // {
            //     cout << "*";
            // }
        }

        // for (int k = 1; k <= i * 2 - 1; k++)
        // {
        //     cout << "*";
        // }
        cout << endl;
    }

    cout << endl;
    return 0;
}