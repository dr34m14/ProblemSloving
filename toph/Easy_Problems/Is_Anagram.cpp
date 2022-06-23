#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int size_a = a.size();
    int size_b = b.size();

    for (int i = 0; i < size_a; i++)
    {
        for (int j = 0; j < size_b; j++)
        {
            if (a[i] == b[j])
            {
                char temp = b[j];
                b[j] = b[i];
                b[i] = temp;
            }
        }
    }

    if (a == b)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}