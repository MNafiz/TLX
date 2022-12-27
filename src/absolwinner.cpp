#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A,B,C;
    cin >> A >> B >> C;

    int absol = (A+B+C)/7;
    absol *= 4;
    if(A == absol || B == absol || C == absol) cout << "YA\n";
    else cout << "TIDAK\n";   
    return 0;
}