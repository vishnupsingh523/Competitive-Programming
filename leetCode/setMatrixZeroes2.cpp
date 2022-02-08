#include<bits/stdc++.h>
using namespace std;

// This is another approach of solving this question.

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size(), c = matrix[0].size();
        int cols[c];
        int rows[r];
        for(int i=0;i<r;i++)
            rows[i]=1;
        
        for(int i=0;i<c;i++)
            cols[i]=1;
        
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                if(matrix[i][j]==0)
                {
                    cols[j] =0;
                    rows[i] =0;
                }
        
        for(int i=0;i<r;i++)
        {
            if(rows[i]==0)
                for(int j=0;j<c;j++)
                    matrix[i][j] = 0;
        }
        for(int i=0;i<c;i++)
        {
            if(cols[i]==0)
                for(int j=0;j<r;j++)
                    matrix[j][i] = 0;
        }
        
    }
};