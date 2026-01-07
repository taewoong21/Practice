#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const long long INF = 1e18;

struct Edge {
    int u; 
    int v; 
    int w; 
};

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    if (!(cin >> N >> M)) return 0;

    vector<Edge> edges;
    for (int i = 0; i < M; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({ u, v, w });
    }

    vector<long long> dist(N + 1, INF);
    dist[1] = 0;

    bool negative_cycle = false;

    for (int i = 1; i <= N; ++i) 
    {
        for (const auto& edge : edges) 
        {
            int cur = edge.u;
            int next = edge.v;
            int cost = edge.w;

            if (dist[cur] != INF && dist[next] > dist[cur] + cost) 
            {
                dist[next] = dist[cur] + cost;

                if (i == N) 
                {
                    negative_cycle = true;
                }
            }
        }
    }

    if (negative_cycle) {
        cout << -1 << "\n";
    }
    else {
        for (int i = 2; i <= N; ++i) 
        {
            if (dist[i] == INF) 
            {
                cout << -1 << "\n";
            }
            else 
            {
                cout << dist[i] << "\n";
            }
        }
    }

    return 0;
}