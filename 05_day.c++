/*1436. Destination City*/


class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string> s;
        
        for(int i=0;i<paths.size();i++){
            s.insert(paths[i][0]);
        }
        
        for(int i=0;i<paths.size();i++){
            if(s.find(paths[i][1]) == s.end()){
                return paths[i][1];
            }
        }
        return "";
    }
};