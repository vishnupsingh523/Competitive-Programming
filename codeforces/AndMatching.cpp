#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
int main(){
    
    int n, value;

    int t;
    cin>>t;
    while(t--){
        cin>>n>>value;
    
        if(value == n-1)
        cout<<-1<<endl;
        else{
            unordered_map<int, int> ump; 

            for(int i=0;i<=n/2-1;i++)
            ump[i]= n-1-i;

            if(value <n/2)
            {
                ump[0] = ump[value];
                ump[value] = n-1;

                for(auto i: ump)
                cout<<i.first<<" "<<i.second<<endl;
            }
            else{
                ump[0] = n-1-value;
                ump[value] = n-1;
                for(auto i: ump)
                if(i.first != (n-1-value))
                cout<<i.first<<" "<<i.second<<endl;
            }
        }
    }
}