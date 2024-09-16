#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // write data
    
    // string fileInput = "Hello everyone !!!";
    // ofstream out("sample.txt");
    // out << fileInput;

    // read data
    string fileData;
    ifstream in("data.txt");
    getline(in, fileData);

    // in >> fileData;      /// only one word print
    cout << fileData;

    return 0;
}