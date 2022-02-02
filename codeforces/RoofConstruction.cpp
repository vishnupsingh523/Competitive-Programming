#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int main(){

    int t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        int mask = 0;
        int check = n-1;
        while(check>0)
        {
            mask++;
            check = check/2;
        }

        mask--;
        check = 1;
        while(mask-->0)
        check = check*2;

        for(ll i=n-1;i>=check; i--)
        cout<<i<<" ";

        for(ll i=0;i<check;i++)
        cout<<i<<" ";
        cout<<endl;
    }
}