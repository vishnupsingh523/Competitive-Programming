#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a, b="", c="";
    cin>>a;

    // b = a[a.length()-1];
    // a.erase(a.end()-1);
    
    while(a!="\0" || b!="\0")
    {
        if(a == "")
        {
            while(b!="")
            {
                c = c + b[b.size()-1];
                b.erase(b.end()-1);
            }
        }
        else if(b=="")
        {
            b = b+ a[a.size()-1];
            a.erase(a.end()-1);
        }
        else if(a[a.size()-1]<= b[b.size()-1])
        {
            b = b+ a[a.size()-1];
            a.erase(a.end()-1);
        }
        else{
            c = c + b[b.size()-1];
            b.erase(b.end()-1);
        }

        // cout<<a<<" "<<b<<" "<<c<<"\n";
    }
    cout<<c;
}