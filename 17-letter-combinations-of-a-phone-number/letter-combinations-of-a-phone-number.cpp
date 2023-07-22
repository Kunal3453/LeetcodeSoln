class Solution {
public:
void helper(int ind,string digits,string output,string options[],vector<string>&ans)
{
    if(ind>=digits.size())
    {
        ans.push_back(output);
        return;
    }
    int number=digits[ind]-'0';
    string mapping=options[number];
    for(int i=0;i<mapping.length();i++)
    {
        output.push_back(mapping[i]);
        helper(ind+1,digits,output,options,ans);
        output.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        string options[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>ans;
        if(digits.length()==0)
        {
            return ans;
        }
        string output;
        helper(0,digits,output,options,ans);
        return ans;
    }
};