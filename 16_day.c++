/*1578. Minimum Time to Make Rope Colorful*/


class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
//         int min2Day = 0 , minTill = INT_MAX , count =0;
        
//         for(int i=0;i<colors.size()-1;i++){
//             if(colors[i]==colors[i+1]){
//                 min2Day =  neededTime[i];
//                 cout<<min2Day<<endl;
//                 count++;
//             }
//             cout<<minTill<<endl;
//             if(minTill>min2Day && min2Day!=0){
//                 minTill = min2Day;  
//             }
//             if(minTill<INT_MAX && minTill>min2Day && min2Day!=0)
//             minTill +=min2Day;
//         }
        
//         if(count==0){
//             return 0;
//         }
        
//         return minTill;
        
        
        // second solutuion
        
//     int i=0,j=0,sum=0,n=colors.size();
//         while(i<n && j<n){
//             int maxTime =0 , curTime = 0 ;
            
//             while(j<n && colors[i]==colors[j]){
//                 maxTime = max(maxTime,neededTime[j]);
//                 curTime = curTime + neededTime[j];
//                 j++;
//             }
//             i=j;
//             sum = sum + (curTime -maxTime);  
//         }
//        return sum; 
        
        
        // solution 3
        
        int totalSum =0 ;
        
        for(int i=0 ; i<colors.size()-1;i++){
            if(colors[i]==colors[i+1]){
                totalSum = totalSum + min(neededTime[i],neededTime[i+1]);
                cout<<min(neededTime[i],neededTime[i+1])<<endl;
                neededTime[i+1] = max(neededTime[i],neededTime[i+1]);
            }
        }
        
       return totalSum; 

    }
};