class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        int eat=n/2;
        int count=1;
       set<int>ans;
       for(int i=0;i<n;i++)
       {
           ans.insert(candyType[i]);
       }
       if(ans.size()>=eat)
       {
           return eat;
       }
       else if(ans.size()!=1&&ans.size()<eat)
       {
           return ans.size();
       }
       return 1;
    }
};