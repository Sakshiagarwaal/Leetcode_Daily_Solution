/* Maximum Product of Two Elements in an Array*/

/*SOLUTION 01*/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int n = nums.size();
        return (nums[n-1]-1)*(nums[n-2]-1);
            
    }
};


/*SOLUTION 2 IN O(N)*/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int maxE = 0, nextMax = 0;
        for(auto &it:nums){
            if(it>maxE){
                nextMax = maxE;
                maxE = it;
            }
            else {
                nextMax = max(it,nextMax);
            }
        }
        return (maxE-1)*(nextMax-1);
    }
};