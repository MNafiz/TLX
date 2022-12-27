#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,j=0;
    char c;
    vector<char> nama;
    cin >> n;
    getchar();
    nama.push_back(getchar());
    for(int i = 1; i < n; i++)
    {
        c = getchar();
        if(c != nama[j])
        {
            nama.push_back(c);
            j++;
        }
    }
    for(int i = 0; i < j + 1; i++)
    {
        cout << nama[i];
    }

    cout << endl;
    return 0;
}