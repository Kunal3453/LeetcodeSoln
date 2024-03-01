class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>>mpp;
        for(auto x:edges)
        {
            vector<int>temp=x;
            int u=temp[0];
            int v=temp[1];
            mpp[u].push_back(v);
            mpp[v].push_back(u);
        }
        vector<bool>visited(n+1,false);
        queue<int>q;
        visited[source]=true;
        q.push(source);
        while(!q.empty())
        {
            int k=q.front();
            q.pop();
            for(auto x:mpp[k])
            {
                if(visited[x]==false)
                {
                    visited[x]=true;
                    q.push(x);
                }
            }
        }
        return visited[destination];
    }
};