class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int pre=0;
        int n=gain.size();
        vector<int>profit;
        profit.push_back(pre);
        for(int i=0;i<n;i++)
        {
            pre+=gain[i];
            profit.push_back(pre);
        }
        return *max_element(profit.begin(),profit.end());
    }
};