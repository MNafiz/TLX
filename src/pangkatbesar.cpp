#include <bits/stdc++.h>

using namespace std;

long long fastpower(long long a, long long b)
{
    long long res = 1;
    while(b > 0)
    {
        if(b & 1) res = (res*(a%1000000))%1000000;
        a = (a*a)%1000000;
        b /= 2;
        
    }
    return res;
}

int main()
{
    long long a,b;
    cin >> a >> b;
    long long ans = fastpower(a,b);
  
    if(pow(a,b) >= 1000000)
    {
        long long temp = ans;
        int f = 0;
        while(temp)
        {
            temp/=10;
            f++;
        }
        f = 6 - f;
        while(f--) cout << "0";
        if(ans) cout << ans << endl;
        else cout << endl;
    }
    else cout << ans << endl;
    return 0;
}