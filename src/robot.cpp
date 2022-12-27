#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c;
    int x=0,y=0;
    while((c = getchar()) != EOF)
    {
        if(c == 'R') x += 1;
        else if(c == 'L') x -= 1;
        else if(c == 'U') y += 1;
        else if(c == 'D') y -= 1;
    }

    cout << x << " " << y << endl;   
    return 0;
}