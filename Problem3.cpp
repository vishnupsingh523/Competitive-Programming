// odd or even number
#include<iostream>
using namespace std;

int main(){
    int t;
    long long value;
    cout<<"Enter the number of test cases: ";
    cin>>t;
    while(t--)
    {
        cin>>value;
        if(value%2==0)
        cout<<"Its even number.\n";
        else
        cout<<"Its odd number.\n";
    }
}