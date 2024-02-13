class Solution {
public:
bool ispallidrome(string s)
{
    int n=s.length();
    int i=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            return false;
        }
    }
    return true;
}
    string firstPalindrome(vector<string>& words) {
        string res="";
        for(auto x:words)
        {
            if(ispallidrome(x)==true)
            {
                return x;
            }
        }
        return res;
    }
};