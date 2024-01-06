class Solution {
public:
    int maxVowels(string s, int k) {
        const int m = s.size();
        int ans = 0;
        int temp = 0;
        for(int i=0;i<k;++i){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='o' ||s[i]=='u'){temp+=1;}
        }
        ans = max(ans,temp);
        for(int i=k;i<m;++i){
            if(s[i-k]=='a' || s[i-k]=='e' || s[i-k]=='i' ||s[i-k]=='o' ||s[i-k]=='u'){temp-=1;}
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='o' ||s[i]=='u'){temp+=1;}
            ans = max(ans,temp);
        }
        return ans;
    }
};