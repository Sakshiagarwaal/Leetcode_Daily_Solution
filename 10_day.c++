/*2706. Buy Two Chocolates*/

/*T.C :O(N^2)*/


class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int minCost = INT_MAX;
        int n = prices.size();
        
        for(int i=0;i<n;i++){
            for(int j = i+1;j<n;j++){
                int cost = prices[i]+prices[j];
                minCost = min(minCost,cost);
            }
        }
        
        if(minCost <= money) return money-minCost;
        
        else 
            return money ;
    }
};


/*T.C : O(NlogN)*/

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
       
        sort(prices.begin(),prices.end());
        int minCost = prices[0]+prices[1];
        
        if(minCost<=money){
            return money-minCost;
        }
        
        return money;
        
    }
};