#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

// parameters completing
#define all(x) x.begin(), x.end()

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

bool parity(int x){
    if(x%2==0)
    return true;
    else 
    return false;
}

int main(){
    sync

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];

        for(int i=0;i<n;i++)
        cin>>arr[i];

        for(int i=0;i<n-1;i++)
        {
            if(parity(arr[i]&arr[i+1])==parity(arr[i]|arr[i+1]))
            cout<<"Parity equal"<<endl;
            else
            cout<<"Parity Not equal\n";
        }
    }
}