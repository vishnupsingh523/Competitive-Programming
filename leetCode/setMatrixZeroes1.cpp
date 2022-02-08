#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int arr[matrix.size()][matrix[0].size()];
        
        for(int i=0;i<matrix.size();i++)
            for(int j=0;j<matrix[i].size();j++)
                arr[i][j] = matrix[i][j];
        
        for(int i=0,j=0;i<matrix.size();i++)
        {
            for(j=0;j<matrix[0].size();j++)
            {
                if(arr[i][j]==0)
                {
                    for(int k=0;k<matrix[0].size();k++)
                        matrix[i][k]=0;
                    for(int k=0;k<matrix.size();k++)
                        matrix[k][j]=0;
                }
            }
        }
        
    }
};