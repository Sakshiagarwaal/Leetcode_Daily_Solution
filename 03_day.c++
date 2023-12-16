/*1582. Special Positions in a Binary Matrix*/


/*SOLUTION : BRUTE FORCE  Time complexity:  O(m⋅n⋅(m+n))*/


class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int ans = 0;
        int n = mat.size(), m= mat[0].size();
        
        for(int i= 0;i<n;i++){
            for(int j =0;j<m;j++){
                if(mat[i][j] == 0){
                    continue ;
                }
                
                bool flag = true;
                
                for(int k=0;k<n;k++){
                    if(k != i&& mat[k][j] == 1){
                        flag = false ;
                        break;
                    }
                }
                
                for(int x = 0;x<m;x++){
                    if( x != j && mat[i][x] == 1){
                        flag = false ;
                        break;
                    }
                }
                if(flag){
                    ans ++;
                }
            }
        }
        return ans ;
    }
};



/*Optimised ans no.1* time complexity : O(m.n) */

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        
        vector<int> sumRow(n,0), sumCol(m,0);
        
        for(int i=0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(mat[i][j]==1){
                    sumRow[i]++;
                    sumCol[j]++;
                }
            }
        }
        
        int ans = 0;
        
          for(int i=0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(mat[i][j]==1){
                    if(sumRow[i] == 1 && sumCol[j] == 1){
                        ans ++;
                    } 
                }
            }
        }
        return ans ;
    }
};



/*one more optimised solution */

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        
        vector<int> sumRow(n,0), sumCol(m,0);
        
        for(int i=0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(mat[i][j]==1){
                    sumRow[i]++;
                    sumCol[j]++;
                }
            }
        }
        
        int ans = 0;
        
          for(int i=0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(mat[i][j]==1){
                    if(sumRow[i] == 1 && sumCol[j] == 1){
                        ans ++;
                        break;
                    } 
                }
            }
            
        }
        return ans;
    }
};