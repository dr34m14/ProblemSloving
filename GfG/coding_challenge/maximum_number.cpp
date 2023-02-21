#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int bigNum = num;
    string s = std::to_string(num);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '7')
        {
            s[i] = '9';
        }

        if (bigNum < stoi(s))
        {
            bigNum = stoi(s);
            break;
        }
    }

    cout << bigNum;
    return 0;
}
