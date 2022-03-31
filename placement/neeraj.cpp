#include<bits/stdc++.h>
using namespace std;

#define ll long long

int ans[200];
ll teamA[200];
ll teamB[200];

int main()
{
    ll n,m;
    cin>>n;
    
    for(ll i=0;i<n;i++)
    cin>>teamA[i];

    cin>>m;
    // ll teamB[m];

    // sort(teamA, teamA+n);
    int value;
    for(ll i=0;i<m;i++)
    {
        cin>>value;

        int count=0;
        for(ll j=0;j<n;j++)
        {
            if(value>=teamA[j])
            count++;
        }

        ans[i] = count;
    }

    for(int i=0;i<m;i++)
    cout<<ans[i]<<" ";
    return 0;
}