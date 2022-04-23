#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];

        int count =0;
        
        for(int i =0 ;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            count++;
        }

        if(count>=2)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
    return 0;
}