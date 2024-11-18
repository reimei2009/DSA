//
// Created by ADMIN on 11/15/2024.
//

#include "pair.h"
#include <iostream>
#include <utility>
#include <vector>
#include <set>
using namespace std;


/* pair<data_type1, data_type2> name;
 * make_pair(x, y) => tra ve 1 cap x, y
 *first, second
 */
int main()
{
    pair<int, int> p = make_pair(100,200);
    cout << p.first << endl;
    cout << p.second << endl;

    pair<string, int> p1("ntt", 20);
    cout << p1.first << endl;

    p1.first = "Ntt";
    cout << p1.first << endl;

    pair<int, int> a[100];
    int n ;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter pair : " ;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].first << " " << a[i].second << endl;
    }


    vector<pair<int,int>> vector;
    int n1 ;
    cout << "Enter n1: ";
    cin >> n1;
    for (int i = 0 ; i < n1; i++)
    {
        int x, y;
        cout << "Enter x: ";
        cin >> x;
        cout << "Enter y: ";
        cin >> y;
        vector.push_back({x,y});
    }
    for (auto i : vector)
    {
        cout << i.first << " " << i.second << endl;
    }




    // set use pair
    set<pair<int,int>> set;
    set.insert({1,2});
    set.insert({1,3});
    set.insert({2,5});
    set.insert({1,1});

    cout << "Set use pair: " << endl;
    for (auto i : set)
    {
        cout << i.first << " " << i.second << endl;
    }

}
