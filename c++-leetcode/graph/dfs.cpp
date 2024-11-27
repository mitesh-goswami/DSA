#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], int vis[], vector<int> &dfsl)
{
    vis[node] = 1;
    dfsl.push_back(node);
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, adj, vis, dfsl);
        }
    }
}

vector<int> dfsOfGraph(int V, vector<int> adj[])
{
    // Code here
    int vis[V] = {0};
    vector<int> dfsl;
    int start = 0;
    dfs(start, adj, vis, dfsl);
    return dfsl;
}