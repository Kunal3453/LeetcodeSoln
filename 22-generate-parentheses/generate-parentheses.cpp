class Solution {
public:
void helper(int n,int oc,int cc,vector<string>&ans,string s)
{
    if(oc==n&&cc==n)
    {
        ans.push_back(s);
        return;
    }
    if(oc<n)
    {
        helper(n,oc+1,cc,ans,s+'(');
    }
    if(cc<oc)
    {
        helper(n,oc,cc+1,ans,s+')');
    }
}
    vector<string> generateParenthesis(int n) {
        int oc=0,cc=0;
        vector<string>ans;
        helper(n,oc,cc,ans,"");
        return ans;
    }
};