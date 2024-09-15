#include <iostream>
using namespace std;

class Scooty // parent class
{
public:
    int speed;
    float mileage;

    int changeBoot(float bootSpace)
    {
        return this->bootSpace = bootSpace;
    }

    void printData()
    {
        cout << "speed : " << speed << endl
             << "mileage : " << mileage << endl
             << "bootSpace : " << bootSpace << endl
             << "gears : " << bootSpace << endl
             << endl;
    };

private:
    float bootSpace;
};

class Bike : public Scooty ///  here we have extend class so bile is a derive class or chiled class
{
public:
    int gears;
};

int main()
{
    Bike obj;
    obj.speed = 230;
    obj.mileage = 40;
    obj.gears = 5;
    obj.changeBoot(12.2);
    obj.printData();

    return 0;
}