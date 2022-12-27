#include <bits/stdc++.h>

using namespace std;

long long A[200069];
long long N,i,j;
long long prod = 1;

int main()
{
    cin >> N;
    for(i=0;i<N;i++) cin >> A[i];
    if(N <= 2000)
    {
        for(i=0;i<N;i++)
        {
            for(j=i+1;j<N;j++) prod = (prod*(A[i]^A[j])) % 998244353;
        }

        cout << prod << endl;
    }
    else cout << 0 << endl;
    return 0;
}