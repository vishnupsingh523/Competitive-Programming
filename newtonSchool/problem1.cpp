#include<bits/stdc++.h>
using namespace std;

int main()
{
    string value;
    getline(cin,value);
    // I woke up at 6 AM and went for walk at 7 15 and then gave my exam at 16 30 PM
    int num = 0,prv = 0;
    int count=0;
    for(int i=0;i<value.size();i++)
    {
        if(value[i]>='0'&&value[i]<='9')
        {
            if(count==0)
            {
                num = (value[i]-48);
                count=1;
            }
            else
            num = num*10 + (value[i]-48);
            continue;
        }
        else{
            count = 0;
        }
        
        if(num < prv)
        {
            cout<<"False";
            return 0;
        }
        else{
            prv = num;
        }
    }

    cout<<"True";
}