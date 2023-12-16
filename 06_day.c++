/*242. Valid Anagram*/


/*SOLUTION ! T.C - O(N*logn)*/


class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};


/*O(N) solution but space is also O(N)*/


class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }    
      unordered_map<char,int> mp;   
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
          for(int i=0;i<s.length();i++){
            mp[t[i]]--;
        }
        for(auto &it: mp){
            if(it.second !=0) return false ;
        }
        return true;
    }
};