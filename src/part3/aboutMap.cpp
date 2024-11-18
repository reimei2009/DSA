//
// Created by ADMIN on 11/15/2024.
//

#include "aboutMap.h"
#include <map>
#include <iostream>
using namespace std;

/* map<data_type1, data_type2> name
 *  map<key, value> map
 *  map[key] = value
 * size()
 * insert()
 * ung dung : dem tan suat xuat hien cac phan tu trong mang
 */

int main()
{
    map<int, int> myMap;
    myMap.insert({1,2});
    myMap.insert({1,3}); // ko insert duoc
    myMap.insert({2,3});
    myMap.insert({3,2});
    myMap[5] = 2; // ~ insert({5,2})
    for (pair<int,int> myPair : myMap)
    {
        cout << myPair.first << " " << myPair.second << endl;
    }

    //iterator
    for (map<int,int>::iterator it = myMap.begin(); it != myMap.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }


    return 0;
}
