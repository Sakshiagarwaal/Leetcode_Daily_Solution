/*1155. Number of Dice Rolls With Target Sum*/



class Solution {
public:
    long long int solveM(int dice , int faces , int target , vector<vector<long long int>> &dp){
      
        if(target<0){
            return 0;
        }
        
        if(dice==0 && target!=0){
            return 0;
        }
        if(target==0 && dice !=0){
            return 0;
        }
        
        if(target ==0 && dice==0){
            return 1;
        }
        if(dp[dice][target] != -1){
            return dp[dice][target];
        }
        
        
        long long int ans = 0,mode=1000000007;
        for(int i=1;i<=faces;i++){
           ans = ans + solveM(dice-1 , faces , target-i , dp); 
        }
        
        return dp[dice][target] = ans%mode;
    }
    
    
   long long int numRollsToTarget(int n, int k, int target) {
       vector<vector<long long int>> dp(n+1 , vector<long long int>(target+1 , -1));
        return solveM(n , k ,target , dp);
                              
    }
};