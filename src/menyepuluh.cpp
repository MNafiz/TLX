#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    bool bisa = false;
    cin >> n;
    while(n)
    {
        if(!(n%10))
        {
            bisa = true;
            break;
        }
        n /= 10;
    }

    if(bisa) cout << "YES\n";
    else cout << "NO\n";   
    return 0;
}