#include <bits/stdc++.h>
using namespace std;
// int factorial(int a)
// {
//     if (a < 2)
//     {
//         return 1;
//     }
//     long long sum = 1;
//     for (int i = a; i >= 2; i--)
//     {
//         sum *= i;
//     }
//     return sum;
// }
int main()
{
    int N, sum = 0;
    cin >> N;
    N = N - 1;

    // for (int i = 0; i < N+1; i++)
    // {
    //     sum += factorial(N) / (factorial(i) * factorial(N - i));
    // }
    // cout << sum;
    //how i forget about 2^n =nC0 +...nCn 😁
    cout<<(1<<N);

    return 0;
}