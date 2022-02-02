#include<bits/stdc++.h>
using namespace std;
 
#define vi vector<int>
#define vf vector<float>
#define vs vector<string>
#define vll vector<long long>
#define ll long long
#define ulli unsigned long long int
#define fl float
#define db double
#define st string

#define fon(x,n) for(auto i=x;i<n;i++)
#define w(x) int x;cin>>x;while(x--)
#define endl "\n"
 
#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
    sync

    int t;
    cin>>t;
    while(t--)
    {
        ulli N, D;
        cin>>N>>D;

        ulli totalPeople = 1;
        int i=1;
        for(;i<=10&&i<=D;i++)
        totalPeople = totalPeople*2;
        if(totalPeople>=N)
        totalPeople = N;
        else if(i!=D+1)
        {
            for(;totalPeople<=N&&i<=D;i++)
            totalPeople = totalPeople*3;
        }
        cout<<totalPeople<<endl;
    }
    
}