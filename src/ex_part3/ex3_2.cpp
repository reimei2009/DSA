//
// Created by ADMIN on 11/18/2024.
//

#include <ex3_2.h>
#include <set>
// dem so luong phan tu khac nhau trong mang so nguyen

// int countDistinct(int n, int arr[])
// {
//     set<int> set;
//     for (int i = 0 ; i < n ; i++)
//     {
//         set.insert(arr[i]);
//     }
//     return set.size();
// }

int countDistinct(int n, int arr[])
{
    map<int, int> map;
    for (int i = 0; i < n; i++)
    {
       map[arr[i]] = 1;
    }
    return map.size();
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Number of distinct elements: " << countDistinct(n, arr) << endl;
    return 0;
}