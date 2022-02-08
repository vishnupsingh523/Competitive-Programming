#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;

    string value;

    int ans =0;

    cin>>size;
    while(size--)
    {
        cin>>value;
        if(value=="X++"||value=="++X")
        ans++;
        else
        ans--;
    }

    cout<<ans;
}