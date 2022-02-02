// check numbers or not
#include<iostream>
using namespace std;

int main(){
    int t;
    char value;
    cout<<"Enter the number of test cases: ";
    cin>>t;
    while(t--)
    {
        cin>>value;
        if(value >='0' && value<='9')
        cout<<"Yes, its a number.\n";
        else
        cout<<"No, its not a number.\n";
    }
}