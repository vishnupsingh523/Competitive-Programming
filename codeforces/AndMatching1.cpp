#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
int main(){
    
    int n, value;

    int t;
    cin>>t;
    while(t--){
        cin>>n>>value;
    
        if(value == 3 && n == 4)
        cout<<"-1"<<endl;
        else if(value == n-1)
        {
            cout<<0<<" "<<n-1<<endl;
            cout<<1<<" "<<n/2-1<<endl;
            int k =1;
            for(int i=2;i<n/2+1;i++)
            {
                if(i==n/2-1)
                continue;
                else if(i==1<<k)
                {
                    cout<<i<<" "<<(n-1-(i/2))<<endl;
                    k++;
                }
                else
                cout<<i<<" "<<(n-1-i)<<endl;
            }
            continue;
        }
        else{
            cout<<value<<" "<<n-1<<endl;
            for(int i=1;i<=n/2-1;i++)
            if(i!=value && (n-1-i)!=value)
            cout<<i<<" "<<(n-1-i)<<endl;
            
            if( value != 0 )
            cout<<0<<" "<<(n-1-value)<<endl;
        }
    }
}