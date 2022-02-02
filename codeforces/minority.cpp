#include<bits/stdc++.h>

using namespace std;
#define endl "\n"
int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;

        int zero =0;
        int one =0;
        long long strMax =0;

        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='0')
            zero++;
            else
            one++;
        }
        if(zero>one)
        {
            strMax = one;
        }
        else if(zero<one)
        {
            strMax = zero;
        }

        one =0;zero =0;
        for(int j=0;j<str.size()-1;j++)
        {
            if(str[j]=='0')
            zero++;
            else
            one++;
        }

        if(zero>one)
        {
            if(strMax<one)
            strMax = one;
        }
        else if(zero<one)
        {
            if(strMax<zero)
            strMax = zero;
        }
        
        cout<<strMax<<endl;
    }
}