//
// Created by ADMIN on 11/18/2024.
//

#include <iostream>
#include "sortUseLibrary.h"
#include <algorithm>
#include <vector>
using namespace std;

/*sort(array, array + size, (greater<int()>))
 * stable_sort
 */

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    vector<int> vector(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vector[i];
    }
    sort(vector.begin(), vector.end());
}
