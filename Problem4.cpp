// find a product of some number;
#include<iostream>
using namespace std;

int main(){
    int t;
    long long value;
    cout<<"Enter the number of test cases: ";
    cin>>t;
    
    while(t--)
    {
        int n;
        cout<<endl<<"Number of variables: ";
        cin>>n;
        long long product;
        for(int i=0;i<n;i++)
        {
            cin>>value;
            product *= value;
        }
        cout<<"The product is : "<<product;
    }
}