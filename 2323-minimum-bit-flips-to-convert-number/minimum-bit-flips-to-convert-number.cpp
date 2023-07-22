class Solution {
public:
    int minBitFlips(int start, int goal) {
         int cnt = 0;
        while(goal || start)
        {
            bool goalBit = (goal&1);
            bool startBit = (start&1);
            if(goalBit)
            {
                if(startBit)
                {
                    // Do Nothing
                }
                else
                {
                    cnt++;
                }
            }
            else
            {
                if(startBit)
                {
                    cnt++;
                }
                else
                {
                    // Do Nothing
                }
            }
            start >>= 1;
            goal >>= 1;
        }
        return cnt;
    }
};