//
// Created by ADMIN on 11/11/2024.
//

#include <gcd.h>

ll gcd (ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd (b , a % b); // de quy den khi b = 0
}

ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b; // tranh tran so
}

int main()
{
    ll a, b ;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "gcd is : " << gcd (a, b);

    cout << endl;

    cout << "lcm is : " << lcm (a, b);
    return 0;
}