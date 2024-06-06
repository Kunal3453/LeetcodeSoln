class Solution {
public:
   int countGoodSubstrings(string s) {
        if (s.size() < 3) return 0;

        unordered_map<char, int> mpp;
        int i = 0, j = 0, cnt = 0;
        
        while (j < s.size()) {
            mpp[s[j]]++;
            
            if (j - i + 1 == 3) {
                // Check if we have 3 distinct characters
                if (mpp.size() == 3) {
                    cnt++;
                }
                // Slide the window
                mpp[s[i]]--;
                if (mpp[s[i]] == 0) {
                    mpp.erase(s[i]);
                }
                i++;
            }
            j++;
        }
        
        return cnt;
    }
};