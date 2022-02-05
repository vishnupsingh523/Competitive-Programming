#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

// parameters completing
#define all(x) x.begin(), x.end()

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){

    int t;
    cin>>t;

    while(t--)
    {
        string str;
        int k,s;
        cin>>s>>k;
        cin>>str;

        string rev = str;
        reverse(all(rev));
        if(rev == str)
        {
            if(s%2==0)
            {
                if(k%2==0)
                cout<<"YES\n";
                else
                cout<<"NO\n";
            }
            else
            cout<<"YES\n";
        }
        else{
            int count =0;
            for(int i=0;i<s;i++)
            {
                if(str[i]!=str[s-1-i])
                {
                    str[i] = str[s-1-i] = '1';
                    count++;
                }
            }
            
            if(count == k)
            cout<<"YES\n";
            else if(count > k)
            cout<<"NO\n";
            else{
                if(s%2==0)
                {
                    if((k-count)%2==0)
                    cout<<"YES\n";
                    else
                    cout<<"NO\n";
                }
                else
                cout<<"YES\n";
            }
        }
    }

}