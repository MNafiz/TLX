#include <bits/stdc++.h>

using namespace std;

long long akarbinser(long long n)
{
    long long l = 1,r = n,mid;
    while(l <= r)
    {
        mid = l + (r-l)/2;
        if(mid*mid == n) return mid;
        else if(mid*mid > n) r = mid - 1;
        else l = mid + 1;
    }
    return 0;
}

long long akarbiasa(long long n)
{
    long long ans=0,i;
    for(i=0;i*i<=n;i++)
    {
        if(i*i == n)
        {
            ans = i;
            break;
        }
    }
    return ans;
}

int main()
{
    long long n;
    cin >> n;
    // long long ans = akarbinser(n);
    long long ans = akarbiasa(n);
    cout << ans << endl;   
    return 0;
}