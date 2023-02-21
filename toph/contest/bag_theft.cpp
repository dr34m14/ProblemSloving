#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i, hour, mine,alltime,per;
    string s;

    cin >> i;
    while (i--)
    {
        cin >> s;

        hour = stoi(s.substr(0, 2)) - 9;
        mine = stoi(s.substr(2, 2));
        alltime=(hour*60)+mine;
        per=((alltime/5)*8)-((alltime/15)*8);
        cout<<per<<endl;
    }

    return 0;
}