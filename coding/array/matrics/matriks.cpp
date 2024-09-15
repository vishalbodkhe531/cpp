#include <iostream>
using namespace std;

int main()
{

    int arr[3][3] = {{1, 2, 5}, {3, 4, 8}, {5, 4, 2}};
    int brr[3][3] = {{7, 6, 3}, {2, 5, 1}, {1, 5, 7}};

    int size = 3;

    for (int i = 0; i < size; i++)
    {
        cout << "[ ";
        for (int j = 0; j < size; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "]" << " + ";

        cout << "[ ";
        for (int k = 0; k < size; k++)
        {
            cout << brr[i][k] << " ";
        }

        cout << "]" << " = ";

        cout << "[ ";
        for (int l = 0; l < size; l++)
        {
            cout << arr[i][l] + brr[i][l] << " ";
        }
        cout << "]" << endl;
    }

    //---------------------For Substraction------------------------------
    cout << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "[ ";
        for (int j = 0; j < size; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "]" << " - ";

        cout << "[ ";
        for (int k = 0; k < size; k++)
        {
            cout << brr[i][k] << " ";
        }

        cout << "]" << " = ";

        cout << "[ ";
        for (int l = 0; l < size; l++)
        {
            cout << arr[i][l] - brr[i][l] << "  ";
        }
        cout << "]" << endl;
    }

    //----------------------For Multiplication--------------------------------

    cout << endl
         << endl;

    int result[size][size];

    for (int i = 0; i < size; i++)
    {

        cout << "[ ";
        for (int j = 0; j < size; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "] * [";

        for (int j = 0; j < size; j++)
        {
            cout << brr[i][j] << " ";
        }

        cout << "] = [ ";

        for (int j = 0; j < size; j++)
        {
            int temp = 0;
            for (int k = 0; k < size; k++)
            {
                temp += (arr[i][k] * brr[k][j]);
            }
            result[i][j] = temp;
            cout << result[i][j] << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}