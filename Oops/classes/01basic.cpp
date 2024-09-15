#include <iostream>
using namespace std;

class Car
{
public:
    string name;
    int price;
    int seats;
    string type;
};

void printCars(Car x)
{
    cout << "name : " << x.name << endl
         << "price : " << x.price << endl
         << "seats : " << x.seats << endl
         << "type : " << x.type << endl
         << endl;
}

int main()
{
    Car verna;
    verna.name = "verna";
    verna.price = 4300000;
    verna.seats = 5;
    verna.type = "offical";

    Car maruti;
    maruti.name = "swift";
    maruti.price = 700000;
    maruti.seats = 5;
    maruti.type = "family";

    Car mahendra;
    mahendra.name = "thar";
    mahendra.price = 1500000;
    mahendra.seats = 5;
    mahendra.type = "royal";

    printCars(verna);
    printCars(mahendra);

    cout << endl;
}