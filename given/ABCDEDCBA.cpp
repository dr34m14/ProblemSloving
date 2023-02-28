#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    int n, temp_len;

    string s, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        s = s + char(65 + i);
    }
    // for (int i = n-2; i >=0; i--)
    // {
    // s=s+char(65+i);
    // }
    temp_len = s.length();
    temp = s.substr(0, temp_len - 1);
    reverse(temp.begin(), temp.end());
    temp = s + temp;

    cout << temp << endl;
    int middle_index = temp.length() / 2;
    for (int i = 0; i < n - 1; i++)
    {
        temp.replace(middle_index + i, 1, " ");
        temp.replace(middle_index - i, 1, " ");

        cout << temp << endl;
    }

    return 0;
}