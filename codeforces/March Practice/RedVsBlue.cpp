#include<bits/stdc++.h>
using namespace std;

// const int N = 1e5+10;
// int arr[N];

int main(){
    int t;
    cin>>t;
    while(t--){

        int n, r, b;
        cin>>n>>r>>b;

        string ans = "";


        int diff = r/(b+1);
        int mod = r%(b+1);

        for(int i=0;i<mod; i++)
        cout<<string(diff+1,'R')<<'B';

        for(int i= mod; i<b;i++)
        cout<<string(diff, 'R')<<'B';

        cout<<string(diff, 'R');
        cout<<endl;
    }

}