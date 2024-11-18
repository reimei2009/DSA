//
// Created by ADMIN on 11/11/2024.
//

#include <mod.h>
const int MOD = 100000007;
/*
 * (A + B) % C = ( (A % C) + (B % C) ) % C
 * (A - B) % C = ( (A % C) - (B % C) ) % C
 * (A * B) % C = ( (A % C) * (B % C) ) % C
 * (A ^ B) % C = (A % C) ^ B % C
 * (A / B) % C = (A % C * B^-1) % C
 *
 */

// (A ^ B) % C
ll powMod(ll a, ll b, ll c)
{
    ll res = 1;
    a %= c;
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            res = (res * a) % c;
        }
        a = (a * a) % c;
        b /= 2;
    }
    return res;
}

int main()
{
    ll a, b, c;
    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
    cout << "Enter value for c: ";
    cin >> c;
    cout << endl;
    ll res = powMod(a, b, c);
    cout << "Res : " << res << endl;
    return 0;
}
