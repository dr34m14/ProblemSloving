#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    a[0] = char(a[0] & (~(1 << 5)));
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 's')
        {
            a[i] = '$';
        }
        else if (a[i] == 'i')
        {
            a[i] = '!';
        }
        else if (a[i] == 'o')
        {
            a.replace(i, 1, "()");
        }
    }
    a += '.';

    cout << a;
    return 0;
}