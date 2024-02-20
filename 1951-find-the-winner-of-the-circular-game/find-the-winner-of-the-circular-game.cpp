class Solution {
public:
// int solve(int n,int k)
// {
//     if(n==1)
//     {
//         return 0;
//     }
//     else{
//         return(solve(n-1,k)+k)%n;
//     }
// }
    int findTheWinner(int n, int k) {
        // int ans=solve(n,k)+1;
        // return ans;
        queue<int>q;
        for(int i=1;i<=n;i++)
        {
            q.push(i);
        }
        while(q.size()>1)
        {
            int x=k;
            while(x>1)
            {
                int a=q.front();
                q.pop();
                q.push(a);
                x--;
            }
            q.pop();
        }
        return q.front();
    }
};