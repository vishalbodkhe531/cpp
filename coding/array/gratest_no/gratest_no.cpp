#include <iostream>

using namespace std;

int main()
{
    int arr[6] = {32, 61, 4, 1, 711, 22};

    int maxNumber = 0;
    for (int i = 0; i < 6; i++)
    {
        if (maxNumber < arr[i])
        {
            maxNumber = arr[i];
        }
    }

    cout << "The maximum number in the array is : " << maxNumber;
    cout << endl
         << endl;
    return 0;
}