#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // string input = "hello how are you";
    // ofstream out("sample.txt");
    // out << input;

    string data;

    ifstream in("data.txt");

    getline(in, data);

    cout << data;

    return 0;
}
