//
// Created by ADMIN on 11/13/2024.
//

#include <iostream>
#include <stdio.h>
using namespace std;

// A-Z : 65 - 90
// a-z : 97 - 122
// 1   : 49
// bool isLower(char c): kiem tra chu thuong
// bool isalpha() : kiem tra chu cai
// bool isdigit() ; kiem tra ky tu so
// int toLower() : tra ve ma ascii tuong ung voi ki tu thuong

int main()
{
    char c;
    cin >> c;
    if (c >= 65 && c <= 90)
    {
        c += 32;
    }
    cout << c << endl;
    cout<< std::tolower(c) << endl;
    cout  << std::isdigit(c) << endl;
    cout  << std::isalpha(c) << endl;
    return 0;
}