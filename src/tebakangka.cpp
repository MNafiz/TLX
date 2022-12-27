#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,mid;
    string s;
    cin >> a >> b;
    cin.ignore();
    while(a <= b)
    {
        mid = a + (b-a)/2;
        cout << mid << endl;
        fflush(stdout);
        getline(cin, s);
        if(s=="terlalu besar") b = mid -1;
        else if(s=="terlalu kecil") a = mid + 1;
        else break;
    }   
    return 0;
}