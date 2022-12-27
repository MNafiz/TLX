#include <bits/stdc++.h>

using namespace std;

int dp[2000];
bool isVisited[2000];
vector<int> Edge[2000];

void bfs(int x)
{
    dp[x] = 0;
    queue<int> q;
    q.push(x);
    while(!q.empty())
    {
        int k = q.front();
        q.pop();
        for(int i = 0; i < Edge[k].size(); i++)
        {
            if(!isVisited[Edge[k][i]])
            {
                dp[Edge[k][i]] = dp[k] + 1;
                q.push(Edge[k][i]);
                isVisited[Edge[k][i]] = true;
            }
        }
    }
}

int main()
{
    int V;
    cin >> V;
    for(int i = 0; i < V; i++)
    {
        int x,y;
        cin >> x >> y;
        Edge[x].push_back(y);
        Edge[y].push_back(x);
    }

    bfs(0);
    cout << dp[4] << endl;
    return 0;
}