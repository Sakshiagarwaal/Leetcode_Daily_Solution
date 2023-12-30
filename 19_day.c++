/*1897. Redistribute Characters to Make All Strings Equal*/


class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int> mp;
        for(auto &it:words){
           for(char &x: it){
                mp[x]++;
           }
        }
        
        int n = words.size();
        
        for(auto &[key,val] : mp){
            if(val%n != 0) return false;
        }
        
        return true;
    }
};