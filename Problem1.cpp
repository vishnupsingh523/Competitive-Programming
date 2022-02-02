// average of three numbers
#include<iostream>
using namespace std;

int main(){
    int t;
    double average;
    double a,b,c;
    cout<<"Enter the number of test cases: ";
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        average = a+b+c;
        average = average/3;
        cout<<"Average: "<<average<<endl;
    }
}