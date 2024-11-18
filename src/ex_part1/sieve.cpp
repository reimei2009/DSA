// Created by ADMIN on 11/11/2024.

#include <vector>
#include <sieve.h>

const int maxn = 100000000;
bool prime[maxn + 1];

// Sàng số nguyên tố từ 1 -> n
void sieve()
{
    for (int i = 0; i <= maxn; i++)
    {
        prime[i] = true;
    }
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i <= sqrt(maxn); i++)
    {
        // Loại bỏ tất cả bội của i
        if (prime[i])
        {
            for (int j = i * i; j <= maxn; j += i)
            {
                prime[j] = false;
            }
        }
    }
}

// Sàng số nguyên tố trong phạm vi [left, right]
void sieveInRange(int left, int right)
{
    vector<bool> isPrime(right - left + 1, true); // Mảng vector kích thước [left, right]

    for (int i = 2; i <= sqrt(right); i++)
    {
        int start = max(i * i, (left + i - 1) / i * i);
        for (int j = start; j <= right; j += i)
        {
            isPrime[j - left] = false;
        }
    }

    for (int i = max(2, left); i <= right; i++)
    {
        if (isPrime[i - left])
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter n value: ";
    cin >> n;
    sieve();
    for (int i = 1; i <= n; i++)
    {
        if (prime[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;

    int left, right;
    cout << "Enter range (left right): ";
    cin >> left >> right;
    sieveInRange(left, right);

    return 0;
}
