void dfs(vector<bool> &visited,vector<int> &vect,vector<int> adj[],int s)
{
    visited[s]=true;
    for(auto x:adj[s])
    {
        if(visited[x]==false)
        dfs(visited,vect,adj,x);
    }
    vect.insert(vect.begin(),s);
}

vector<int> topoSort(int V, vector<int> adj[]) {
    
    vector<bool> visited(V,false);
    vector<int> vect;
    
    for(int i=0;i<V;i++)
    {
        if(visited[i]==false)
        dfs(visited,vect,adj,i);
    }
    return vect;
}
