//
// Created by ADMIN on 11/11/2024.
//
#include <maxX.h>

// Tim x lon nhat sao cho N! chia het cho k^x
int degree(int n, int k)
{
    int res = 0;
    for (int i = k; i <= n; i++)
    {
        int m = i;
        while (m % k == 0)
        {
            res++;
            m /= k;
        }
    }
    return res;
}

int main()
{
    int n, k;
    cout << "Enter n value: ";
    cin >> n;
    cout << "Enter k value: ";
    cin >> k;
    int res = degree(n, k);
    cout << "Res: " << res << endl;
    return 0;
}
