class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
string res="";
for(int i=0;i<strs[0].length();i++)
{
    char ch=strs[0][i];
    bool k=true;
    for(int j=0;j<n;j++)
    {
        if(strs[j].length()<0||strs[j][i]!=ch)
        {
         k=false;
         break;
        }
    }
    if(k==false)
    {
        break;
    }
     else if(k==true)
    {
        res+=ch;
    }
}
return res;


//    int n=strs.size();
//    string ans="";
//    for(int i=0;i<strs[0].size();i++)
//    {
//        char ch=strs[0][i];
//        bool check=true;
//        for(int j=1;j<n;j++)
//        {
//            if(strs[j].size()<i||strs[j][i]!=ch)
//            {
//                check=false;
//            }
//        }
//        if(check==false)
//        {
//            break;
//        }
//        else
//        {
//            ans+=ch;
//        }
//    }
//    return ans;



    }
};