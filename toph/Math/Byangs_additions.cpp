#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    bool res;
    for (int i = 0; i < a.size(); i++)
    {
        int x = (a[i] - '0') + (b[i] - '0');
        if (x > 9)
        {
            res = true;
            break;
        }
    }
    if (res)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}