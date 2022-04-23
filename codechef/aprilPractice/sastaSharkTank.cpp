#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a, b;
        cin>>a>>b;
        int dis10 = a*10;
        int dis20 = b*5;

        if(dis10 == dis20)
        cout<<"ANY\n";
        else if(dis10>dis20)
        cout<<"FIRST\n";
        else
        cout<<"SECOND\n";
    }
    return 0;
}