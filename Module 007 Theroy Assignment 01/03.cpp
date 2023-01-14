#include <bits/stdc++.h>
using namespace std;
// Adjacency list representation of a graph
// Visited array to keep track of visited vertices
const int MAX_N = 100;
vector<int> adj[MAX_N];
vector<int> vec;
bool visited[MAX_N];

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
// BFS function
void BFS(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (!visited[v])
            {
                q.push(v);
                visited[v] = true;
            }
        }
    }
}
void ConnectedComponents()
{
    int component = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (visited[vec[i]] == false)
        {
            BFS(vec[i]);
            visited[vec[i]] = true;
            component++;
        }
    }
    cout << "Component : " << component << endl;
}

int main()
{
    int edge, a, b;
    cin >> edge;
    for (int i = 0; i < edge; i++)
    {
        cin >> a >> b;
        addEdge(adj, a, b);
        vec.push_back(a);
        vec.push_back(b);
    }
    ConnectedComponents();
    return 0;
}
