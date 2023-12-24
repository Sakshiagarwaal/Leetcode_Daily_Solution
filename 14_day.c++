/*1758. Minimum Changes To Make Alternating Binary String*/

/*solution T.C : O(N)*/

class Solution {
public:
    int minOperations(string s) {
        int s0 = 0 , s1 = 0;
        for(int i = 0;i<s.length();i++){
            if(i%2 == 0){
               
                if(s[i] == '0')
                s1 ++;
            else
                s0 ++ ;
            }
            
            else{
                if(s[i] == '1') s1++;
                else s0++;
            }
        }
        
        return min(s0,s1);
    }
};


/*Another solution*/

class Solution {
public:
    int minOperations(string s) {
        int start0 = 0;
        
        for (int i = 0; i < s.length(); i++) {
            if (i % 2 == 0) {
                if (s[i] == '1') {
                    start0++;
                }
            } else {
                if (s[i] == '0') {
                    start0++;
                }
            }
        }
        
        return min(start0, (int) s.length() - start0);
    }
};