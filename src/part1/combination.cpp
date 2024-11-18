//
// Created by ADMIN on 11/11/2024.
//

#include <combination.h>

// To hop C(n, k)
ll nCk (ll n , ll k)
{
    ll res = 1;
    k = min(k , n - k); // C(k, n) = C(n - k , n)
    for (int i  = 0 ; i < k ; i++)
    {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

ll nAk (ll n, ll k)
{
    ll res = 1;
    for (int i = 0 ; i < k ; i++)
    {
        res *= (n - i);
    }
    return res;
}

int main()
{
    ll n, k;
    cout << "Enter n value: " ;
    cin >> n;
    cout << "Enter k value: " ;
    cin >> k;
    ll res_nCk = nCk(n, k);
    cout << "C(n, k): " << res_nCk << endl;

    ll res_nAk = nAk(n, k);
    cout << "C(n, k): " << res_nAk << endl;
}


