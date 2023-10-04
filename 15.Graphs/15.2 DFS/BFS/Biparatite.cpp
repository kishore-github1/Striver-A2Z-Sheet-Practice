#include <bits/stdc++.h>
using namespace std;

bool dfs(int node, int col, vector<vector<int>> graph, vector<int> &color)
{
    color[node] = col;
    for (auto i : graph[node])
    {
        if (color[i] == -1)
        {
            if (dfs(i, !col, graph, color) == false)
                return false;
        }
        else if (color[i] == col)
            return false;
    }
    return true;
}

bool isBipartite(vector<vector<int>> &graph)
{
    int v = graph.size();
    vector<int> color(v, -1);

    for (int i = 0; i < v; i++)
    {
        if (color[i] == -1)
        {
            if (dfs(i, 0, graph, color) == false)
                return false;
        }
    }
    return true;
}

int main()
{

    return 0;
}