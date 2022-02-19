#include<bits/stdc++.h>
using namespace std;

#define endl "\n"


int main(){
    int t;
    long long x,y,a,b;
    cin>>t;
    while(t--){

        cin>>x>>y;
        cin>>a>>b;

        long long total =0;
        long long total2 =0;

        if(x>y)
        total2 = (x-y)*a+y*b;
        else
        total2 = (y-x)*a + x*b;

        total = (x+y)*a;

        if(total>total2)
        cout<<total2<<endl;
        else
        cout<<total<<endl;
    }
}