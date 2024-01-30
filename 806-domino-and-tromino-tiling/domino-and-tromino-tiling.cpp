class Solution {
public:
   int numTilings(int n) {
        int mod = 1e9+7;
        vector<long long>v(1001,0);  

        //v[0] has 2*0 matrix gave 0 output
        v[1] = 1;    //v[1] has 2*1 matrix gave 1 output
        v[2] = 2;   //v[2] has 2*2 matrix gave 2 output
        v[3] = 5;  //v[3] has 2*0 matrix gave 5 output
        //v[4] = 11     bcz  2*5+1  //where 5 is tha output of A[n-1]
        

        //but for n=5 we get the output as 24
        //2*11+2      //in this we adding 2,comes from v[2],there is difference of n-3   thats why we add  v[n-3]; 
        if(n<=3)
        {
            return v[n];
        }

        for(int i=4;i<=n;i++)
        {
            v[i] = 2 * v[i-1] +v[i-3];
            v[i] %= mod;
        }
        return v[n];

        
    }
};