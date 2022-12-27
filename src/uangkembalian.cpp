#include <bits/stdc++.h>

using namespace std;

long long N,i;
long long dp[501][50000] = {0};
long long A[501] = {0};
long long sum = 0;

void solve()
{
    for(i=0;i<=sum;i++)
    {
        if(!(i%A[0])) dp[0][i] = 1;
    }
}

int main()
{
    cin >> N;
    for(i=0;i<N;i++)
    {
        cin >> A[i];
        sum += A[i];
    }
    solve();
    return 0;
}