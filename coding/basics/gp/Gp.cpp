#include<iostream>

using namespace std;

int main(){
    // 1,2,4,8,16;
    int number;
    cout<<"Enter a number : ";
    cin>>number;

    int value = 1;

    for(int i = 1; i <= number; i++){
        value = value * 2;
        cout<<value<<" ";
    }
        cout<<endl;
    return 0;
}