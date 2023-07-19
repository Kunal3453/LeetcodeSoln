#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int trap(vector<int>& height)
    {
    //     int n=height.size();
    // if(height.size()==0)
    // return 0;
    // int left[n],right[n];
    // int res=0;
    // left[0]=height[0],right[n-1]=height[n-1];
    // for(int i=1;i<n;i++)
    // {
    //     left[i]=max(height[i],left[i-1]);
    // }
    // for(int i=n-2;i>=0;i--)
    // {
    //     right[i]=max(height[i],right[i+1]);
    // }
    // for(int i=1;i<n-1;i++)
    // {
    //     res+=min(left[i],right[i])-height[i];
    // }
    // return res;
    int n=height.size();
    int left=0,right=n-1;
    int res=0;
    int leftmax=0,rightmax=0;
    while(left<=right)
    {
        if(height[left]<=height[right])
        {
            if(height[left]>=leftmax)
            {
                leftmax=height[left];
            }
            else
            {
                res+=leftmax-height[left];
            }
            left++;
        }
        else
        {
            if(height[right]>=rightmax)
            {
                rightmax=height[right];
            }
            else
            {
                res+=rightmax-height[right];
            }
            right--;
        }
    }
    return res;
}
};