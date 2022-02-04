#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

string longestCommonPrefix(vector<string>& str) {
    string ans = "";
    
    for(int i=0;i < str[0].size();i++)
    {
        int count =0;
        for(int j=0;j<str.size();j++)
        {
            if(str[0][i]==str[j][i])
                count++;
        }
        if(count == str.size())
            ans = ans+ str[0][i];
        else
            break;
    }
    
    return ans;
}

int main(){

    vector<string> str;
    
    int size;
    cin>>size;
    while(size--)
    {
        string value;
        cin>>value;
        str.push_back(value);
    }
    
    cout<<longestCommonPrefix(str);
}