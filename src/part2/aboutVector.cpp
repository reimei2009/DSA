//
// Created by ADMIN on 11/13/2024.
//

#include <aboutVector.h>


int main()
{
    vector<int> a;

    a.push_back(1);
    a.push_back(2);
    a.push_back(3);

    cout << a.size() << endl;
    for (int i = 0 ; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    a.pop_back();
    for (auto i : a)
    {
        cout << i << " ";
    }

    cout << endl;

    a.push_back(4);
    a.push_back(5);
    a.push_back(6);

    //iterator : con trỏ quản lý các giá trị trong vector/array
    vector<int>::iterator it;
    for (it = a.begin(); it != a.end() ; it++)
    {
        cout << *it << " ";
    }

    return 0;
}