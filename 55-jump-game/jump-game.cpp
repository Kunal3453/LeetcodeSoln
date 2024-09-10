class Solution {
public:
    bool canJump(vector<int>&array) {
     int reach = 0;
        for (int i = 0; i <= reach; i++) {
            reach = max(reach, i + array[i]);
            if (reach >= array.size() - 1) {
                return true;
            }
        }
        return false;   
    }
};