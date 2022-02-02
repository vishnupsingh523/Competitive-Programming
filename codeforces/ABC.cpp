#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;

        if(str.length()>=3)
        cout<<"NO\n";
        else if(str.length()==2)
        {
            if(str[0]==str[1])  
            cout<<"NO\n";
            else
            cout<<"YES\n";
        }else
        cout<<"YES\n";
    }
}