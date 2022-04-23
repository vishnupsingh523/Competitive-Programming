#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x;
        cin>>x;
        int discount10 = (x)/10;

        if(discount10<100)
        cout<<100<<endl;
        else
        cout<<discount10<<endl;
    }
    return 0;
}