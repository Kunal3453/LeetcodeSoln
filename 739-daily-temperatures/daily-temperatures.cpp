class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& a) {
        int n= a.size();
        vector<int> ans(n,0);
        stack<pair<int,int>> st;
        st.push(make_pair(a[n-1],n-1));
        ans[n-1]=0;
        
        for(int i=n-2;i>=0;i--)
        {
            while(!st.empty() && st.top().first<=a[i])
            {
                st.pop();
            }
            if(st.empty())
                ans[i]=0;
            else
                ans[i]=st.top().second-i;
            
            st.push(make_pair(a[i],i));
        }
        
        return ans;
    }
};