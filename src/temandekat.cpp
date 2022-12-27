#include <bits/stdc++.h>

using namespace std;

int A[1001];
int B[1001];

int power(int a, int b)
{
    int res = 1;
    while(b > 0)
    {
        if(b & 1) res *= a;
        a *= a;
        b /= 2;
    }
    return res;
}

int T(int x1,int y1, int x2, int y2, int d)
{
    return power(abs(x1-x2),d) + power(abs(y1-y2),d);
}

int main()
{
    int n,d;
    cin >> n >> d;
    for(int i = 0; i < n; i++)
    {
        cin >> A[i] >> B[i];
    }
    int min = T(A[0],B[0],A[1],B[1],d);
    int max = min;
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            int temp = T(A[i],B[i],A[j],B[j],d);
            if(temp > max) max = temp;
            if(temp < min) min = temp;
        }
    }
    cout << min << " " << max << endl;
    return 0;
}