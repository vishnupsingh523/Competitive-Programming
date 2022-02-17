#include<bits/stdc++.h>
using namespace std;

#define endl "\n"


int main(){
    int t;
    int n;
    int x;

    cin>>t;
    while(t--){
        cin>>n>>x;
        
        int value;
        int sum = x;
        int max = x;

        for(int i=0;i<n;i++)
        {
            cin>>value;
            if(value>=0)
            sum+= value;
            else
            sum = sum + value;

            if(sum>max)
            max = sum;
        }

        cout<<max<<endl;
    }
}