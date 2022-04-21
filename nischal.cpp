#include<bits/stdc++.h>
using namespace std;

int fastest(int t, int d1, int d2, int d3){
    int a = d1/t;
    int b = d2/t;
    int c = d3/t;

    if(a>=b && a>=c)
    return a;
    else if(b>=a && b>=c)
    return b;
    else
    return c;
}

int main(){
    int t;
    int d1,d2,d3;
    cin>>t>>d1>>d2>>d3;

    cout<<fastest(t,d1,d2,d3);

}