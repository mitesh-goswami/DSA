#include <bits/stdc++.h>
using namespace std;

bool dfs(int node, int parent, vector<int> adj[], int vis[])
{
    vis[node] = 1;
    // queue<pair<int,int>> q;
    // q.push({node, parent});
    for (auto adjNode : adj[node])
    {
        if (!vis[adjNode])
        {
            if (dfs(adjNode, node, adj, vis))
                return true;
        }
        else if (adjNode != parent)
        {
            return true;
        }
    }
    return false;
}
bool isCycle(int V, vector<int> adj[])
{
    // Code here
    int vis[V] = {0};
    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            if (dfs(i, -1, adj, vis))
                return true;
        }
    }
    return false;
}