class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
       sort(g.rbegin(),g.rend());
       sort(s.rbegin(),s.rend());
       int curr=0,count=0;
       int n=g.size();
       int m=s.size();
       for(int i=0;i<n;i++)
       {
        if(curr<m&&g[i]<=s[curr])
        {
            curr++;
            count++;
        }
       }
       return count;
    }
};