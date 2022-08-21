// https://www.hackerearth.com/problem/algorithm/christmas-tree-of-height-n/
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
         int numl;
        cin >> numl;
       int*arr=new int[numl][numl] ;
        for (int i = 1; i <= numl; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || j == i)
                {
                    cout << 1 << " ";
                }
                else
                {
                }
            }
            cout << "\n";
        }
    }

    return 0;
}