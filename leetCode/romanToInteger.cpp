#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"


int romanToInt(string s) {
    unordered_map<char,int> ump;
    ump['I'] = 1;
    ump['V'] = 5;
    ump['X'] = 10;
    ump['L'] = 50;
    ump['C'] = 100;
    ump['D'] = 500;
    ump['M'] = 1000;
    
    int ans = 0;
    for(int i=0;i<s.length();i++)
    {
        if(ump[s[i]]>= ump[s[i+1]])
            ans = ans + ump[s[i]];
        else
        {
            ans = ans + (ump[s[i+1]]- ump[s[i]]);
            i++;
        }
    }
    return ans;
}

int main(){

    string str;
    cin>>str;
    cout<<romanToInt(str);
}