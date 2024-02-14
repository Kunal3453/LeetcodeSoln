class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) {
         int p=0;
    int n=1;
    vector<int>ans(a.size(),0);
    for(int i=0;i<a.size();i++)
    {
        if(a[i]<0)
        {
            ans[n]=a[i];
            n=n+2;
        }
        else{
            ans[p]=a[i];
            p=p+2;
        }
    }
    return ans;
    }
};