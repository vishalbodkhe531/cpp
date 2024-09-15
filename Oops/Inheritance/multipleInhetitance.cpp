#include <iostream>
using namespace std;

class Cricketer
{
public:
    int runs;
    int vickets;
    int average;
};

class Engineer
{
public:
    int experience;
    string domain;
};

class Combo : public Cricketer, Engineer /// multiple inheritance
{
public:
};

int main()
{
    return 0;
}