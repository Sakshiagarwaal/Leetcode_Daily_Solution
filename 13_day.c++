/*1496. Path Crossing*/



class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_set<int> s({0});   
        unordered_map<char, int> update({{'N', 1}, {'S', -1}, {'E', 100000}, {'W',-100000}});
        for(int i = 0, node = 0; i < path.size(); ++i){
            node += update[path[i]];
            if( s.find(node) != s.end() ) return true;
            s.insert(node);
        }
        return false;
   }
};