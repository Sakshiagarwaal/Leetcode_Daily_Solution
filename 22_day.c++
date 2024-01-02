/*2610. Convert an Array Into a 2D Array With Conditions*/



class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
         vector<vector<int>> ans;
         vector<int> v(nums.size()+1);
        
        for(auto &it: nums){
            if(v[it]>=ans.size()){
                ans.push_back({});
            }
            ans[v[it]].push_back(it);
            v[it]++;
        }
        return ans ;
    }
};