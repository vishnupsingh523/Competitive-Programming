#include<bits/stdc++.h>

using namespace std;
#define endl "\n"
int main(){
    int i=0;

    int t;
    cin>>t;
    while(t--){
        cin>>i;
        if(i%7==0)
        cout<<i<<endl;
        else{
            int lst = i/10;
            for(int k=0;k<10;k++)
            if((lst*10+k)%7==0)
            {
                cout<<lst*10+k<<endl;
                break;
            }
        }
    }
}