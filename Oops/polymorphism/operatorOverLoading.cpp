#include <iostream>
using namespace std;

class Fraction
{
public:
    int num;
    int den;

    Fraction(int num, int den)
    {
        this->num = num;
        this->den = den;
    }

    void display()
    {
        cout << num << "/" << den << endl;
    }
};

int main()
{
    Fraction obj(1, 2);
    obj.display();
    return 0;
}