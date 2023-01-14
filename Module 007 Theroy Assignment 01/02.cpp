#include <bits/stdc++.h>
using namespace std;
int bi_dir[1000][1000] = {0};
int n, m;
int count=0;

int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        if (bi_dir[v][u] == 0)
        {
            bi_dir[u][v] = 1;
            count++;
        }
    }
    cout << "The number of edges must removed: " << count << endl;
}
