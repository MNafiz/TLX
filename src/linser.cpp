#include <bits/stdc++.h>

using namespace std;

long long n,cek,A,i,minim,ans;

int main()
{
    cin >> n >> cek;
    cin >> A;
    minim = abs(cek-A);
    ans = A;
    for(i=1;i<n;i++)
    {
        cin >> A;
        if(abs(A-cek) <= minim)
        {
            minim = abs(A-cek);
            ans = A;
        }
    }

    cout << ans << endl;
    return 0;
}