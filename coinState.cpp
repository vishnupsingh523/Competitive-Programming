#include<bits/stdc++.h>
using namespace std;

char currentState(char state, int n){
    if(state=='T')
    {
        if(n%2==0)
        return 'T';
        else
        return 'H';
    }
    else{
        if(n%2==0)
        return 'H';
        else
        return 'T';
    }
}

int main(){
    char state;
    int n;
    cin>>state;
    cin>>n;

    cout<<currentState(state, n);

}