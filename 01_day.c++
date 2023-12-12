<<<<<<< HEAD
/*  Element Appearing More Than 25% In Sorted Array   */
=======
/*   Element Appearing More Than 25% In Sorted Array  */
>>>>>>> 26b0c24801a9a4e67fe8a752bcb0f82bee1f5ec8


/*SOLUTION*/
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size(), q = n/4;
        
        for(int i=0;i<n-q;i++){
            if(arr[i] == arr[i+q]){
                return arr[i];
            }
        }
        
        return -1;
    }
};
