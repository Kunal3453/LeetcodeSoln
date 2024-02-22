class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=0;
        int sum=0;
        int petrol=0;
        int distance=0;
        for(int i=0;i<gas.size();i++)
        {
            sum+=gas[i]-cost[i];
            petrol+=gas[i];
            distance+=cost[i];
            if(sum<0)
            {
                sum=0;
                start=i+1;
            }
        }
        if(petrol<distance)
        {
            return -1;
        }
        return start;
    }
};