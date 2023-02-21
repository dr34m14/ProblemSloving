#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 1;
    int next = 1;
    int N;
    cin >> N;
    if (N < 2)
    {
        cout << 1;
    }
    else
    {
        for (int i = 0; i < N - 2; i++)
        {
            int temp = next + a;
            a = next;
            next = temp;
        }
    }
    cout << next;
    return 0;
}