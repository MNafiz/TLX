#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long T,N,min,A,sum;
    cin >> T;
    while(T--)
    {
        cin >> N;
        cin >> A;
        min = A;
        sum = A;
        for(long long i = 1; i < N; i++)
        {
            cin >> A;
            sum += A;
            if(A < min) min = A;
        }
        cout << sum - N*min << endl;
    }
    return 0;
}