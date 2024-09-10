class Solution {
public:
    int jump(vector<int>& nums) {
        int jump=0;
        int currmax=0;
        int reach=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(i+nums[i]>currmax)
            {
                currmax=i+nums[i];
            }
            if(i==reach)
            {
                jump++;
                reach=currmax;
            }
        }
        return jump;
    }
};