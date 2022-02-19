#include<bits/stdc++.h>
using namespace std;

#define endl "\n"


int main(){
    long long n;
    cin>>n;
    int mod = n%4;
    if(n==0)
    cout<<1;
    else
    if(mod == 0)
    cout<<6;
    else if(mod == 1)
    cout<<8;
    else if(mod == 2)
    cout<<4;
    else if(mod = 3)
    cout<<2;
}