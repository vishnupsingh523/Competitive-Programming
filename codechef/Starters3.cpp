#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int main(){
    int t;
    
    cin>>t;

    while(t--){
        int x, y;

        cin>>x>>y;
        
        if(y==0)
        {
            cout<<x<<endl;
        }
        else if(x==y){
            cout<<x*2-1<<endl;
        }
        else{
            cout<<y*2+(x-y)<<endl;
        }
    }
}