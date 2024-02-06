class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>>temp;
        for(auto x:strs)
        {
            string k=x;
            sort(x.begin(),x.end());
            temp[x].push_back(k);
        }
        vector<string>g;
        vector<vector<string>>ans;
        for(auto x:temp)
        {
          g=x.second;
          ans.push_back(g);
        }
return ans;
    }
};