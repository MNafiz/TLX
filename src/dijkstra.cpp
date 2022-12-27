#include <bits/stdc++.h>

using namespace std;

const long long INF = 1e8;
long long n,m,dp[100069];
vector<pair<long long,long long>> aw[100069];
priority_queue<pair<long long,long long>> pq;

void dijkstra(long long s)
{
    long long w,p,i;
    for(i = 1; i <= n; i++)
    {
        dp[i] = INF;
    }
    dp[s] = 0;
    pq.push({0,s});
    while(!pq.empty())
    {
        w = -pq.top().first;
        p = pq.top().second;
        pq.pop();
        if(w > dp[p]) continue;
        for(i = 0; i < aw[p].size(); i++)
        {
            long long l = aw[p][i].first;
            long long z = aw[p][i].second;
            if(dp[l] > z + w)
            {
                pq.push({-z-w,l});
                dp[l] = z + w;
            }
        }
    }
}

int main()
{
    int a,b;
    cin >> n >> m >> a >> b;
    for(int i = 0; i < m; i++)
    {
        long long x,y,w;
        cin >> x >> y >> w;
        aw[x].push_back({y,w});
        aw[y].push_back({x,w});
    }
    dijkstra(a);
    cout << dp[b] << endl;
    return 0;
}