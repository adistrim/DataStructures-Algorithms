#include <bits/stdc++.h>
using namespace std;

const int inf = numeric_limits<int>::max();

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> dist(n + 1, inf);
    vector<vector<pair<int, int>>> graph(n + 1);

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        graph[u].push_back({v, w});
        // If graph is directed then the line below should be removed
        graph[v].push_back({u, w});
    }

    int source;
    cin >> source;

    dist[source] = 0;
    set<pair<int, int>> s;
    s.insert({0, source});

    while (!s.empty())
    {
        auto x = *(s.begin());
        s.erase(x);

        for (auto it : graph[x.second])
        {
            if (dist[it.first] > dist[x.second] + it.second)
            {
                s.erase({dist[it.first], it.first});
                dist[it.first] = dist[x.second] + it.second;
                s.insert({dist[it.first], it.first});
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (dist[i] < inf)
        {
            cout << dist[i] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}

/*

Input:
4 4
1 2 24
1 4 20
3 1 3
4 3 12
1 

Output:
0 
24 
3 
15

*/
