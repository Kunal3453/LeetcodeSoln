class Solution {
public:
    int lengthOfLongestSubstring(string s) {
//        
int n=s.size();
vector<int>mpp(256,-1);
int i=0,j=0,ans=0;
while(j<n)
{
    if(mpp[s[j]]!=-1)
    {
        i=max(i,mpp[s[j]]+1);
    }
    mpp[s[j]]=j;
    ans=max(ans,j-i+1);
    j++;

}
return ans;
    }
};















