#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int size = 0;
    cin >> size;
    int awards[size]={0};

    // for(auto i : awards)
    //     cout << i << " ";

    int sum = 0;
    int power[size];
    int armour = 0;
    for (int i = 0; i < size;i++)
        cin>> power[i];

    for (auto i : power)
        sum += i;

    cin >> armour;

    int intialHealth = sum - armour + 1;

    if(intialHealth - (sum-power[size-1])<=0)
        intialHealth++;

    cout << intialHealth;
    return 0;
}