#include<bits/stdc++.h>
using namespace std;
 
#define vi vector<int>
#define vf vector<float>
#define vs vector<string>
#define vll vector<long long>
#define ll long long
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
        // square of timePeriods => cube of semimajor axis
        int t1, t2, r1, r2;
        cin>>t1>>t2>>r1>>r2;
        t1=t1*t1;
        t2=t2*t2;
        r1=r1*r1*r1;
        r2=r2*r2*r2;
        int g1 = __gcd(t1,r1);
        int g2 = __gcd(t2,r2);
        t1 = t1/g1;
        r1=r1/g1;
        t2=t2/g2;
        r2=r2/g2;
        if(t1==t2&&r1==r2)
        cout<<"Yes"<<endl;
        else
        cout<<"No\n";
    }
    
}