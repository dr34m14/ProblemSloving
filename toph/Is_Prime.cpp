#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, is_prime = 0;
    cin >> num;
    if (num > 1)
    {
        for (int i = 2; i < num / 2; i++)
        {
            if (num % i == 0)
            {
                is_prime = 1;
            }
        }
    }
    else
    {
        cout << "No";
    }

    if (is_prime)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }
    return 0;
}