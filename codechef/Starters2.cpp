#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int main(){
    int t;
    
    cin>>t;

    while(t--){
        int a,b,c,p,q,r;

        cin>>a>>b>>c>>p>>q>>r;

        int max = p;
        if(abs(p-a)>abs(b-q)&&abs(p-a)>abs(c-r))
        max = p + b + c;
        else if(abs(p-a)<abs(b-q)&&abs(q-b)>abs(c-r))
        max = q +c+a;
        else if(abs(c-r)>=abs(b-q)&&abs(p-a)<=abs(c-r))
        max = r+b+a;
        
        if((float)max > (float)(p+q+r)/2)
        cout<<"YES\n";
        else
        cout<<"NO"<<endl;
    }
}