#include <bits/stdc++.h>

using namespace std;

void gambar(int n)
{
    if(n==1) cout << "*\n";
    else
    {
        gambar(n-1);
        for(int i = 0; i < n; i++) cout << "*";
        cout <<  endl;
        gambar(n-1);
    }
}

int main()
{
    int n;
    cin >> n;
    gambar(n);
    return 0;
}