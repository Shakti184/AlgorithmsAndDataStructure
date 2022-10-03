//problem statement https://leetcode.com/problems/maximum-sum-of-an-hourglass/


class Solution {
public:
    int maxSum(vector<vector<int>>& g) {
        int mx=0, m=g.size(),n=g[0].size();
        for(int i=0;i<=m-3;i++){
            for(int j=0;j<=n-3;j++){
                int sum=0;
                for(int k=i;k<i+3;k++){
                    for(int l=j;l<j+3;l++){
                        sum+=g[k][l];
                    }
                }
                sum-=g[i+1][j];
                sum-=g[i+1][j+2];
                mx=max(sum,mx);
            }
        }
        return mx;
    }
};
