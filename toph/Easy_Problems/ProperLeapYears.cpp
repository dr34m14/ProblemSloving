#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int year;
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0)
    {
        cout << "Yes";
    }else if(year%400==0)
    {
           cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}