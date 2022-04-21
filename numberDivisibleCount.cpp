#include<bits/stdc++.h>
using namespace std;

int FindNumbersDivisible(int a, int b, int div){
    int count =0;
    for(int i=a;i<=b;i++)
    if(i%div==0)
    count++;
    return count;
}

int main(){
    int a,b,div;
    cin>>a>>b>>div;
    cout<<FindNumbersDivisible(a,b,div);
}