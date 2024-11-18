//
// Created by ADMIN on 11/18/2024.
//

#include <iostream>
#include <algorithm>
using namespace std;
// algorithm : binary_search(...., target)

// vector : binary_search(vector.begin(), vector.end(), target)

bool binarySearch(int arr[],int n, int x)
{

    int left = 0 , right = n - 1;
    while (left <= right)
    {
        int mid  = left + (right - left)/2 ;
        if (arr[mid] == x)
        {
            return true;
        }
        else if ( x < arr[mid])
        {
            right = mid -1;
        }
        else if ( x > arr[mid])
        {
            left = mid + 1;
        }
    }
    return false;
}

//recursion

bool binarySearch(int arr[], int left , int right , int x)
{
    if (left >  right)
    {
        return false;
    }
    int mid = left + (right - left) / 2;
    if (arr[mid] = x)
    {
        return true;
    }
    else if (arr[mid] < x)
    {
        return binarySearch(arr, left, mid -1 ,x);
    }
    else if (arr[mid] > x)
    {
        return binarySearch(arr, mid + 1, right ,x);
    }
}

// tim vi tri dau tien cua 1 phan tu x trong mang da sap xep
int firstOccurence(int arr[], int n, int x)
{
    int left = 0, right = n - 1;
    int res = -1 ;
    while (left <= right)
    {
        int mid = left + (right - left)/2;
        if (arr[mid] == x)
        {
            res = mid ;
            right = mid -1;
        }
        else if ( x < arr[mid])
        {
            right = mid -1;
        }
        else if ( x > arr[mid])
        {
            left = mid + 1;
        }
    }
    return res;
}

// lower_bound(iter1, iter2, target) : tra ve vi tri cua phan tu dau tien >= target
// upper_bound(iter1, iter2, target) : tra ve vi tri cua phan tu dau tien < target
int main(int argc, char* argv[])
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << endl;
    int x;
    cout << "Enter x: " ;
    cin >> x;
    cout << endl;

    cout << "Enter elements of array: " ;
    int *arr = new int[n];
    for (int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    if (binarySearch(arr,n, x))
    {
        cout << "Element founded " << endl;
    }
    else
    {
        cout << "Element not founded " << endl;
    }
    delete[] arr;
    return 0;
}

