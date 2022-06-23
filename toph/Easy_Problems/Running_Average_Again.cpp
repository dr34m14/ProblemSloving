#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long  sum=0;
    for (int i = 1; i <= t; i++)
    {
        long long a;
        cin >> a;
        sum += a;
        float res=sum/(float)i;
        cout << res<< endl;
    }

    return 0;
}