#include <iostream>
using namespace std;

class Vector
{
public:
    int size;
    int capacity;
    int *arr;

    Vector()
    {
        size = 0;
        capacity = 1;
        arr = new int[1];
    }

    void add(int el)
    {
        if (size == capacity)
        {
            capacity *= 2;
            int *arr2 = new int[capacity];
            for (int i = 0; i < size; i++)
            {
                arr2[i] = arr[i];
            }
            arr = arr2;
        };
        arr[size++] = el;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << endl;
        }
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Vector obj;
    obj.add(10);
    obj.add(5);
    obj.add(76);

    // obj.print();
    // obj.add(12);

    // obj.print();

    return 0;
}