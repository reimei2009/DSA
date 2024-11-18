#include <ex3_1.h>

void countFrequency(const vector<int> &arr)
{
    map<int, int> frequencyMap;

    for (int num : arr)
    {
        frequencyMap[arr[num]]++; // Tăng tần suất của phần tử arr[i]
    }

    for (auto it : frequencyMap)
    {
        cout << it.first << " occur: " << it.second << " times." << endl;
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    countFrequency(arr);

    return 0;
}
