#include<bits/stdc++.h>
using namespace std;

#define endl "\n"


int main(){
    int t;
    long long x,y,a,b;
    // cin>>t;
    // while(t--){

        cin>>x>>y;
        
        if(y>x)
        cout<<-1;
        else{
            int total = 0;
            if(x%2==0)
             total = x/2;
            else
            total = x/2 +1;
            while(total%y!=0 && total<=x)
            total++;
            if(total%y==0)
            cout<<total;
            else
            cout<<-1;
        }
}