#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;

int visited[N];

vector<int> adj_list[N];

void dfs(int node)
{
    cout << node << endl;
    visited[node] = 1;

    for (int adj_node : adj_list[node])
    {
        if (visited[adj_node] == 0)
        {
            dfs(adj_node);
        }
    }
}

int main(){
    int nodes, edges;
    cin>>nodes>>edges;

    for(int i=0; i<edges;i++){
        int u, v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int src = 0;
    dfs(src);
    return 0;
}