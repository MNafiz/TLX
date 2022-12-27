#include <bits/stdc++.h>

using namespace std;

long long parent[200069];
long long N,Q;

long long find(long long n)
{
    if(parent[n] == n) return n;
    else
    {
        parent[n] = find(parent[n]);
        return parent[n];
    }
}

bool check(long long a, long long b)
{
    return find(a) == find(b);
}

void join(long long a, long long b)
{
    parent[find(a)] = find(b);
}

int main()
{
    cin >> N >> Q;
    for(int i = 0; i <= N; i++) parent[i] = i; 
    for(int i = 0; i < Q; i++)
    {
        long long a,b,c;
        cin >> a >> b >> c;
        if(a==1) join(b,c);
        else if(a==2)
        {
            if(check(b,c)) cout << "Y\n";
            else cout << "T\n";
        }
    }
    return 0;
}