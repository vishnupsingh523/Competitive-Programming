#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        if(n>=1900)
        cout<<"Division 1";
        else if(n>=1600)
        cout<<"Division 2";
        else if(n>=1400)
        cout<<"Division 3";
        else if(n<=1399)
        cout<<"Division 4";
        cout<<endl;
    }

}