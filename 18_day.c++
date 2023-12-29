/*1335. Minimum Difficulty of a Job Schedule*/


class Solution {
public:

    int dp[301][11];
    int solve(vector<int>&jD , int n , int i, int d){
        if(d==1){
            return *max_element(begin(jD)+i , end(jD));
        }
        if(dp[i][d]!=-1){
            return dp[i][d];
        }
        int res = INT_MAX; 
        int currD = INT_MIN;
        
        for(int j=i;j<=n-d;j++){
            currD = max(currD,jD[j]);
            res = min(res,currD+solve(jD,n,j+1,d-1));
        }
        return dp[i][d] = res;
    }
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        memset(dp,-1,sizeof(dp));
        int n = jobDifficulty.size();
        if(n<d){
            return -1;
      }
        return  solve(jobDifficulty,n,0,d);
        
    }
};