#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

vector<int> g[N];

int main(){

    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        int v1,v2;
        cin>>v1>>v2;

        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }


}