#include<bits/stdc++.h>
using namespace std;

// const int N = 1e5+10;
// int arr[N];

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r, b;
        cin>>n>>r>>b;
        string ans = "";

        int diff = r-b;
        
        if(diff>0)
        {
            if(diff>n/2)
            {
                diff = n-diff;
                int count =0;

                for(int i=0;i<n;i++)
                {
                    if(count<diff)
                    {
                        ans+='R';
                        count++;
                    }
                    else{
                        count=0;
                        ans+='B';
                    }
                }
            }
            else
            {
                int count =0;

                for(int i=0;i<n;i++)
                {
                    if(count<diff)
                    {
                        ans+='R';
                        count++;
                    }
                    else{
                        count=0;
                        ans+='B';
                    }
                }
            }
        }
        else
        {
            diff = -(diff);
            if(diff>n/2)
            {
                diff = n-diff;
                int count =0;

                for(int i=0;i<n;i++)
                {
                    if(count<diff)
                    {
                        ans+='B';
                        count++;
                    }
                    else{
                        count=0;
                        ans+='R';
                    }
                }
            }
            else
            {
                int count =0;

                for(int i=0;i<n;i++)
                {
                    if(count<diff)
                    {
                        ans+='B';
                        count++;
                    }
                    else{
                        count=0;
                        ans+='R';
                    }
                }
            }
        }

        cout<<ans<<endl;
    }

}