//
// Created by ADMIN on 11/15/2024.
//

#include "aboutSet.h"

/* Set thích hợp tìm kiếm, xóa: (O(logn))
 * dem so luong khac nhau trong array - vi cac phan tu trong set phai khac nhau
 * set<data_type> nameset;
 * size();
 * insert();
 * find()
 * count() : dem so lan xuat hien cua 1 phan tu
 */


int main()
{
    set<int> set1 ;
    set1.insert(1);
    set1.insert(2);
    set1.insert(3);
    set1.insert(4);

    cout << set1.size() << endl;

    //duyet set : c1 dung for each
    for (auto x : set1)
    {
        cout << x << " ";
    }

    cout << endl;

    // dung iterator
    for (set<int>::iterator iterator = set1.begin(); iterator != set1.end(); iterator++)
    {
        cout << *iterator << " "; // iterator tro den gia tri...
    }

}
