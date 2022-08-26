#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int number_a = 0;
        for (int i = 0; i < s.size(); i++)
        {

            if (s[i] == 'a')
            {
                number_a++;
            }
        }
        if (number_a % 2 == 0)
        {
            s.pop_back();
            number_a--;
        }
        if (number_a == 0)
        {
            s.append("a");
        }
        if (s.size() < 5)
        {
            s = "  " + s;
        }
        else if (s.size() < 7)
        {
            s = "  " + s;
        }
        else if (s.size() < 11)
        {
            s = " " + s;
        }
        cout << s << endl;
    }
    return 0;
}