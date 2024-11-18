#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//tìm ký tự xuất hiện nhiều nhất trong một chuỗi
char getMostFrequent(string s)
{
    int a[256] = {0};
    for (char ch : s) {
        a[ch]++;
    }

    int maxFrequency = 0;
    char ans = ' ';

    for (int i = 0; i < 256; i++) {
        if (a[i] > maxFrequency || (a[i] == maxFrequency && (char)i < ans)) {
            maxFrequency = a[i];
            ans = (char)i;
        }
    }
    return ans;
}

//tính tổng các chữ số trong chuỗi
int sumNumber(string s)
{
    int sum = 0;
    for (int i = 0 ; i < s.length() ; i++) {
        if (isdigit(s[i])) {
            sum += s[i] - '0';
        }
    }
    return sum;
}

// chuyen 1 chuoi qua integer
int stoi(string s)
{
    int res = 0 ;
    for (int i = 0 ; i < s.length() ; i++)
    {
        res = res * 10 + (s[i] - '0');  // ex : 123 . loop1 : res = 0 * 10 + (49 - 48) = 1 ; loop2 : res = 1 * 10 + (50-48) = 12.....
    }
    return res;
}

//chuyen 1 so thanh string
string to_string(int n)
{
    string res = " ";
    while (n != 0)
    {
        int digit = n % 10;
        res += (char)digit + '0';
        n  /= 10;
    }
    reverse(res.begin(), res.end());
    return res;
}

// stringstream để tách các từ trong chuỗi
void exStringstream(string s)
{
    stringstream ss(s);
    string word;
    int count = 1;
    while (ss >> word) {
        cout << "Tu thu " << count << " doc duoc la: " << word << endl;
        count++;
    }
}

int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    cout << "Most frequent character: " << getMostFrequent(s) << endl;

    string s1;
    cout << "Enter another string: ";
    getline(cin, s1);
    cout << "Sum of all digits: " << sumNumber(s1) << endl;

    exStringstream(s);

    return 0;
}
