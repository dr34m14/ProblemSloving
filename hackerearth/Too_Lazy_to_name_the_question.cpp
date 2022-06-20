#include <iostream>
int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    int* arr_ab = new int[c];

    for (int i = 0; i < c; i++)
    {
        if ((3 * (i + 1)) != (5 * (i + 1)))
        {
            arr_ab[i] = (i + 1) * 3;
            arr_ab[i] = (i + 1) * 5;
            
        }
        else
        {
            arr_ab[i] = (i + 1) * 3;
        }
    }

    return 0;
}