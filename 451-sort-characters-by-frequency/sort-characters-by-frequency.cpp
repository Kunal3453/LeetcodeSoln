class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mpp;
        for(char c:s)
        {
mpp[c]++;
        }
        sort(s.begin(),s.end(),[&mpp](char a,char b)
        {
            return (mpp[a]==mpp[b]?a<b:mpp[a]>mpp[b]);
        });
        return s;

    }
};