#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a;
    cin >> a;
    long long int num;
    long long int num2 = 0;
    while (a--)
    {
        cin >> num;
        if (num > num2)
        {
            num2 = num;
        }
    }
    cout<<num2<<endl;
    return 0;
}