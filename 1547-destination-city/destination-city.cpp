//Approach-1 (Using HashMap) - Count Outdegrees
//T.C : O(n)
//S.C : O(n)
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, int> mp;
        
        for(auto &path : paths) {
            string source = path[0]; //outdegree
            mp[source]++;
        }
        
        for(auto &path : paths) {
            string dest = path[1];
            
            if(mp[dest] == 0) {
                return dest;
            }
        }
        
        return "";
    }
};


/*
//Approach-2 (Using HashSet) - Count Outdegrees
//T.C : O(n)
//S.C : O(n)
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> st;
        
        for(auto &path : paths) {
            string source = path[0]; //source
            st.insert(source);
        }
        
        for(auto &path : paths) {
            string dest = path[1];
            
            if(st.find(dest) == st.end()) {  //if destination is not find in set then it return destination means there is
                return dest;                   // not any outgoing path from destination 
            }
        }
        
        return "";
    }
};*/