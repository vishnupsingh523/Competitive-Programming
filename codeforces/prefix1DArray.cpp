#include<bits/stdc++.h>
using namespace std;
// int N = 100;
// int prfeixSum[N];
int main(){

    int size;
    cin>>size;
    int arr[size];
    arr[0] = 0;
    for(int i=1;i<size;i++)
    {
        cin>>arr[i];
        arr[i] = arr[i]+ arr[i-1];
    }
    int prefixSum[size];
    // intializing 
    for(int i=0;i<size;i++)
    prefixSum[i]=0;
//  0 1 2 3 4 5 6 7 8 9
//  1 2 3 4 5 6 7 8 9 10
    prefixSum[0] = arr[0];

    for(int i=1;i<size;i++)
    prefixSum[i]=prefixSum[i-1]+arr[i];

    cout<<prefixSum[quries[0][1]]- prefix

}