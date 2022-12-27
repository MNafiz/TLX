#include <bits/stdc++.h>


using namespace std;


queue<pair<long long,long long>> q;
long long pos[100][100];
bool isVisited[100][100];
long long xx[4] = {0,0,-1,1},yy[4] = {-1,1,0,0};
long long dp[100][100] = {0};
long long x,y,n,m;
bool state = true;

void bfs()
{
    if(x-1 == 0 || x-1 == n - 1 || y-1 == 0 || y-1 == m - 1)
    {
        cout << "1" << endl;
        state = false;
    }
    q.push({x-1,y-1});
    isVisited[x-1][y-1] = true;
    dp[x-1][y-1] = 1;
    while(!q.empty() && state)
    {
        long long p = q.front().first;
        long long r = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++)
        {
            if((p+xx[i] >= 0 && p+xx[i] <= n - 1) && (r+yy[i] >= 0 && r+yy[i] <= m - 1))
            {            
            if((pos[p+xx[i]][r+yy[i]] == 0) && !isVisited[p+xx[i]][r+yy[i]])
            {
                dp[p+xx[i]][r+yy[i]] = dp[p][r] + 1;
                q.push({p+xx[i],r+yy[i]});
                isVisited[p+xx[i]][r+yy[i]] = true;
                if(p+xx[i] == 0 || p+xx[i] == n-1 || r+yy[i] == 0 || r+yy[i] == m-1)
                {
                    cout << dp[p+xx[i]][r+yy[i]] << endl;
                    state = false;
                    break;
                }
            }
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++) cin >> pos[i][j];
    }
    cin >> x >> y;
    bfs();
    return 0;
}