#include<bits/stdc++.h>
using namespace std;

// const int N = 1e5+10;
// int arr[N];

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ans =-1;
        long long arr[n+1];

        for(long long i=0;i<n+1;i++)
        arr[i]=0;
        
        for(long long i=0;i<n;i++)
        {
            long long value;
            cin>>value;
            
            arr[value]++;

            if(arr[value]>=3)
            {
                ans = value;
                // break;
            }
        }

        cout<<ans<<endl;
    }

}