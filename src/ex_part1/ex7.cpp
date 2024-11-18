//
// Created by ADMIN on 11/11/2024.
//

#include <ex7.h>

// Cho so nguyen duong N > 2. Liet ke tat ca cap so nguyen to p, q co tong dung bang N. Vd: N = 6 ta co tong 3 + 3 = 6..

const int maxn = 100000000;
bool isPrime[maxn + 1];

void seive()
{
    for (int i = 0 ; i <= maxn ; i++)
    {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2 ; i <= sqrt(maxn) + 1 ; i++)
    {
        if(isPrime[i])
        {
            for (int j = i * i ; j < maxn + 1 ; j+=i )
            {
                isPrime[j] = false;
            }
        }
    }
}

int main()
{
    seive();
    int testCase ;
    cin >> testCase ;
    while(testCase--)
    {
        int n ;
        cout << "Enter n value: ";
        cin >> n;
        for (int i = 2; i <= n / 2; i++)
        {
            if (isPrime[i] && isPrime[n - i]) // tong 2 thang nay = n
            {
                cout << n << " = " << i << " + " << n - i << endl;
            }
        }
    }
    return 0;
}
