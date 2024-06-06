class Solution {
public:
     int divisorSubstrings(int num, int k) {
        string s = to_string(num); // Convert the number to a string
        int cnt = 0;

        for (int i = 0; i <= s.size() - k; ++i) {
            string sub = s.substr(i, k); // Extract substring of length k
            int a = stoi(sub); // Convert substring back to an integer
            if (a != 0 && num % a == 0) { // Check if the substring is a valid divisor
                cnt++;
            }
        }

        return cnt;
    }
};