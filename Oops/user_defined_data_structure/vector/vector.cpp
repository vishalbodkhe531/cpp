#include <iostream>
using namespace std;

class Vector
{
public:
    int size;
    int capatity;
    int *arr;

    Vector()
    {
        size = 0;
        capatity = 1;
        arr = new int[1];
    }

    void push(int el)
    {
        if (size == capatity)
        {
            capatity *= 2;
            int *arr2 = new int[capatity];
            for (int i = 0; i < size; i++)
            {
                arr2[i] = arr[i];
            }
            arr = arr2;
        }

        arr[size++] = el;
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int getElement(int idx)
    {
        if (idx > size)
        {
            cout << "Invalid size" << endl;
        }
        return arr[idx];
    }
};

int main()
{
    // dynamic array and vector also dynamic array
    int *arr = new int[5];
    // ------------------------------
    Vector arr2;
    arr2.push(10);
    arr2.print();
    arr2.push(4);
    arr2.print();
    arr2.push(7);
    arr2.print();
    arr2.push(13);
    arr2.print();
    arr2.push(42);
    arr2.print();

    cout << arr2.getElement(21) << endl;
}