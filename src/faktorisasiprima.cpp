#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,tot;
    cin >> n;
    for(int i = 2; i <= n; i++)
    {
        tot = 0;
        if(n%i == 0)
        {
            while(n%i == 0)
            {
                tot++;
                n = n/i;
            }
            if(tot > 1)
            {
                cout << i << "^" << tot;
            }
            else cout << i;
            
            if(n==1)
            {
                cout << endl;
                break;
            }
            else cout << " x ";

        }

    }   
    return 0;
}