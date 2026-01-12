#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int parent[10001];

struct Edge
{
    int u;
    int v;
    int w;
};

int find(int x)
{
    if (parent[x] == x) return x;

    return parent[x] = find(parent[x]);
}

bool unite(int a, int b)
{
    if (find(a) == find(b))
    {
        return false;
    }

    parent[find(b)] = parent[find(a)];
    return true;
}

long long Kruskal(const int& V, const int& E, const vector<Edge>& edges)
{
    int u, v;
    int cnt = 0;
    long long w, total = 0;

    for (int i = 0; i < E; ++i)
    {
        u = edges[i].u;
        v = edges[i].v;
        w = edges[i].w;

        if (unite(u, v))
        {
            total += w;
            ++cnt;
        }

        if (cnt == V - 1) break;
    }

    return total;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int V, E;
    cin >> V >> E;
    
    vector<Edge> edges;
    for (int i = 0; i < E; ++i)
    {
        int A, B, C;
        cin >> A >> B >> C;
        edges.push_back({ A, B, C });
    }
    
    for (int i = 1; i <= V; ++i)
    {
        parent[i] = i;
    }

    sort(edges.begin(), edges.end(), [](const Edge& a, const Edge& b) { return a.w < b.w; });

    long long total = Kruskal(V, E, edges);
    
    cout << total;

    return 0;
}