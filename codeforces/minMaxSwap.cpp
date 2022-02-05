#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
int main(){
    
    int n;
    int t;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        int arr1[n];
        int arr2[n];

        for(int i=0;i<n;i++)
        cin>>arr1[i];
        for(int i=0;i<n;i++)
        cin>>arr2[i];

        int max1 = *max_element(arr1, arr1+n);
        int max2 = *max_element(arr2, arr2+n);

        if(max1>max2)
        {
            for(int i=0;i<n;i++)
            if(arr1[i]<arr2[i])
            {
                arr1[i] += arr2[i];
                arr2[i] = arr1[i]-arr2[i];
                arr1[i] = arr1[i]-arr2[i];
            }
        }
        else{
            for(int i=0;i<n;i++)
            if(arr1[i]>arr2[i])
            {
                int a = arr1[i];
                arr1[i] = arr2[i];
                arr2[i] = a;
            }
        }

        max1 = *max_element(arr1,arr1 + n);
        max2 = *max_element(arr2, arr2 + n);
        
        cout<<max1*max2<<endl;
    }
}