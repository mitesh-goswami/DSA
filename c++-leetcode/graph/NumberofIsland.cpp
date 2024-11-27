#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], int vis[])
{
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, adj, vis);
        }
    }
}
int nIsland(vector<int> adj[], int V)
{
    int vis[V] = {0};
    int count = 0;
    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            count++;
            dfs(i, adj, vis);
        }
    }
    return count;
}