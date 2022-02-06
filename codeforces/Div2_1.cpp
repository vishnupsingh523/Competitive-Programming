#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

// parameters completing
#define all(x) x.begin(), x.end()

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int kOperations(int k, string str){
    int ans =0;
    if(k==0)
    return ans;
    else{
        string rev = str;
        reverse(all(rev));
        if(rev == str)
        {
            ans =1+ kOperations(k-1, str+rev);
        }
        else{
            ans = 1+ kOperations(k-1, str+rev);
            ans += 1+ kOperations(k-1, rev+str);
        }
        return ans;
    }
}

int main(){
    sync
    int n;
    int t;
    cin>>t;

    while (t--)
    {
        string str;
        int k;
        cin>>n>>k;
        cin>>str;

        if(k==0)
        cout<<1<<endl;
        else{
            cout<<kOperations(k-1, str)<<endl;
        }
    }
    
}