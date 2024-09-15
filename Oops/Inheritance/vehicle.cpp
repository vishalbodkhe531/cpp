#include <iostream>
using namespace std;

class Vehical
{
public:
    int topSpeed;
    float mileage;
    string fuel;
};

//---------------Multi-Level-Inheritence----------------------

class twoViler : Vehical
{
};

class Bike : public twoViler
{
};

class scooty : public twoViler
{
};

int main()
{
    return 0;
}