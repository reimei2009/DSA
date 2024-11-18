//
// Created by ADMIN on 11/11/2024.
//

#include <ex10.h>

//cho so tu nhien N. Liet ke cac so co dung 3 chu so (<= N)

bool t_prime(int n)
{
    int count = 0 ;
    for (int i = 2 ; i <sqrt(n) ; i++)
    {
        if (n % i == 0)
        {
            ++count;
            if (n != n/i)
            {
                ++count;
            }
        }
    }
    return count == 3;
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    for (int i = 0 ; i < n ; i++)
    {
        if (t_prime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}

