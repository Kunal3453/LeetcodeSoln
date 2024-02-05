class Solution {
public:
    int firstUniqChar(string s) {
    //    for(int i=0;i<s.length();i++)
    //     {
    //     if (s.find(s[i], s.find(s[i]) + 1)
    //         == string::npos) {
    //         return i;
    //         }
    //     }
    //     return -1;
    int n=s.length();
    map<char,int>mpp;
   for(int i=0;i<n;i++)
   {
      mpp[s[i]]++; 
   }
   for(int i=0;i<n;i++)
   {
       if(mpp[s[i]]==1)
       {
           return i;
       }
   }
    return -1;
    }
};