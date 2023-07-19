class Solution {
public:
 int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int left[n],right[n];
        stack<int>st;
        for(int i=0;i<n;i++)
        {
while(!st.empty()&&heights[st.top()]>=heights[i])
{
st.pop();
}
if(st.empty())
{
    left[i]=0;
}
else
{
    left[i]=st.top()+1;
}
        st.push(i);
    }
    while(!st.empty())
    {
        st.pop();
    }
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty()&&heights[st.top()]>=heights[i])
        {
            st.pop();
        }
        if(st.empty())
        {
            right[i]=n-1;
        }
        else
        {
            right[i]=st.top()-1;
        }
        st.push(i);
    }
        int maxa=0;
        for(int i=0;i<n;i++)
        {
            maxa=max(maxa,(heights[i]*(right[i]-left[i]+1)));
        }
        return maxa;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
         int m=matrix.size();
        if(m==0) return 0;
        int n=matrix[0].size(), result=0;
        vector<int> histogram(n, 0);
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]=='1')
                    histogram[j]+=1;
                else
                    histogram[j]=0;
            }
            
            result = max(result, largestRectangleArea(histogram));
            cout<<result<<" ";
        }
        return result; 
    }
};