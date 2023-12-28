class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mpp;
        for(auto x:arr)
        {
            mpp[x]++;
        }
        set<int>st;
        for(auto k:mpp)
        {
            st.insert(k.second);
        }
        return (st.size()==mpp.size());
    }
};