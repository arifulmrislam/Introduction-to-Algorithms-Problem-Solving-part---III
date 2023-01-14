#include <bits/stdc++.h>
using namespace std;
int bi_dir[1000][1000] = {0};
int n, m;
bool isBidirectional()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // If there is an edge from i to j, check if there is also an edge from j to i.
            if (bi_dir[i][j] == 1 && bi_dir[j][i] == 0)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)  //loop over the number of edges
    {
        int u, v;
        cin >> u >> v; //There exists a directed edge from u to v
        bi_dir[u][v] = 1;
    }
    cout << isBidirectional() << endl;
}
