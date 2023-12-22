/*1422. Maximum Score After Splitting a String*/

/*solution 1 T.C : O(N^2)*/


class Solution {
public:
    int maxScore(string s) {
        int maxScore = 0;
        
        for(int i=0;i<s.length()-1;i++){
            int curScore = 0;
            for(int j = 0;j<=i;j++){
                if(s[j] == '0') curScore ++;
            }
            
            for(int j = i+1;j<s.length();j++){
                if(s[j] == '1') curScore ++;
            }
            maxScore = max(maxScore,curScore);
        }
        
        return maxScore ;
    }
};


/*T.C : O(N)*/

class Solution {
public:
    int maxScore(string s) {
     int ones = count(s.begin(),s.end(),'1');
        int ans = 0, zeros = 0;
        
        for(int i = 0 ; i<s.size()-1; i++){
            if(s[i] == '1'){
                ones--;
            }
            else{
                zeros ++;
            }
            ans = max(ans,zeros+ones);
        }
        
        return ans ;
    }
};