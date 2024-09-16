#include<iostream>
using namespace std;

int main(){
    int x = 3,y,z;
    y = x = 10;  // here value assign right to left....               
    z = x < 10;   // If here using +,/,+,-,%,* so code compile left to right  
    
    cout<<x<<" "<<y<<" "<<z;
}