#include <bits/stdc++.h>
using namespace std;

int main()
{
    string A;
    cin >> A;
    int s_len = A.length();
    string B;
    if (s_len > 3)
    {
        while (s_len > 3)
        {
            B.insert(0, A.substr(s_len - 3, 3));
            B.insert(0, ",");
            A.erase(s_len - 3, 3);
            s_len = s_len - 3;
        }
        B.insert(0, A);
    }
    else
    {
        cout << A << endl;
    }
            cout << B << endl;

    return 0;
}