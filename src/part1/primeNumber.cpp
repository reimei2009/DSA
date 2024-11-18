//
// Created by ADMIN on 11/11/2024.
//

#include "primeNumber.h"

bool primeNumber(int const n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2 ; i < sqrt(n ); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// liet ke/dem cac so nguyen to tu 1 ->  N
/*
 * 1. Coi tat ca cac so tu 0 -> N deu la so nguyen to
 * 2. Sàng :loai bo i neu no la boi cua so khac
 */

int prime[10000001];

void primeSieve()
{
    for (int i = 0 ; i < 1000000 ; i++)
    {
        prime[i] = true;
    }

    //sang
    prime[0] = false ;
    prime[1] = false;
    for (int i = 2 ; i < sqrt(1000000 ); i++)
    {
        if(prime[i])
        {
            for (int j = i * i ; j < sqrt(1000000); j += i)
            {
                prime[j] = false;
            }
        }
    }
}

//phan tich thua so nguyen to
void primeFactorization(int n)
{
    for (int i = 2 ; i <= n ; i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n /= i ;
        }
    }
    cout << endl;
}

int main()
{
    cout << "Enter n value : " ;
    int n ;
    cin >> n;
    if (primeNumber(n))
    {
        cout << "The number is prime \n";
    }
    else
    {
        cout << "The number is not prime \n";
    }

    //void primeSieve()
    primeSieve();
    for (int i = 0 ; i < 100 ; i++)
    {
        if (prime[i])
        {
            cout << i << " " ;
        }
    }

    cout << endl;

    //void primeFactorization()
    cout << "n = " ;
    primeFactorization(n);
    return 0;
}
