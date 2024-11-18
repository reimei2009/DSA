//
// Created by ADMIN on 11/13/2024.
//

#include "ex6_9.h"

//kiem tra chuoi pangram
bool ex6(string s)
{
    int count[256] = {0};
    if (s.length() < 26)
    {
        return false;
    }
    for (char c: s)
    {
        count[c] = 1;
    }
    bool isPangram = true;
    for (int i = 97; i <= 122; i++)
    {
        if (count[i] == 0)
        {
            isPangram = false;
            break;
        }
    }
    return isPangram;
}

// kiem tra chuoi pangram ko phan biet hoa thuong
bool ex7(string s)
{
    if (s.length() < 26)
    {
        return false;
    }
    int count[256] = {0};
    for (char c: s)
    {
        count[tolower(c)] = 1;
    }
    bool isPangram = true;
    for (int i = 97 ; i <= 122; i++)
    {
        if (count[i] == 0)
        {
            isPangram = false;
            break;
        }
    }
    return isPangram;
}


//kiem tra xau doi xung
bool ex8(string s)
{
    string temp = s;
    reverse(s.begin(), s.end());
    return s == temp;
}

// bat buoc phai thay doi dung 1 ki tru trong xau de doi xung.
bool ex9(string s)
{
    int left  = 0 ;
    int right = s.length() - 1;
    int count = 0; // so lan thay doi
    while (left < right)
    {
        if (s[left] != s[right])
        {
            count++;
        }
        ++left;
        -- right;
    }
    if (s.length() % 2 == 0 && count == 0)
    {
        return false;
    }
    if (count >= 2)
    {
        return false;
    }
    return true;
}

int main()
{
    string s;
    cout << "Please enter a string: ";
    cin >> s;
    cin.ignore();
    if (ex6(s))
    {
        cout << "The string is pangram." << endl;
    }
    else
    {
        cout << "The string is not pangram." << endl;
    }

    cout << endl;

    string s1;
    cout << "Please enter a string(No distinction between uppercase and lowercase letters): ";
    getline(cin, s1);
    if (ex7(s))
    {
        cout << "The string is pangram." << endl;
    }
    else
    {
        cout << "The string is not pangram." << endl;
    }
    cout << endl;

    if (ex8(s))
    {
        cout << s << " :is Palindromic string" << endl;
    }
    else
    {
        cout << s << ": is not Palindromic string" << endl;
    }

    return 0;
}
