#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string arr[]={"aa", "aaa", "bb","bbb"};
    
    int t;
    cin>>t;

    while(t--){
        string str;

        cin>>str;

        if(str.size() == 1)
        cout<<"NO"<<endl;
        else
        {
        
            int count = 1;
            for(int i=1;i<str.size();i++)
            {
                if(str[i]==str[i-1])
                count++;
                else
                {
                    if(count>=2&&(count%2==0||count%2==1))
                    {
                        count = 1;
                        // i--;
                    }
                    else{
                        // cout<<"NO\n";
                        break;
                    }
                }
            }

            if(count>=2&&(count%2==0||count%2==1))
            {
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }

    return 0;
}