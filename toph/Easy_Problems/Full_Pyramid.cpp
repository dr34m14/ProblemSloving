#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int jk = num; jk > i; jk--)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j % 2 == 0)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << "\n";
    }

    return 0;
}