//
// Created by ADMIN on 11/13/2024.
//

#include "ex1_5.h"


//Nhap vao 1 xau ki tu va chuyen thanh ki tu in thuong
string ex1(string s)
{
    for (int i = 0 ; i < s.length() ; i++)
    {
        // s[i] = tolower(s[i]);
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] = s[i] + 32;
        }
    }
    return s;
}

//Dem so luong chu cai, so, ki tu dac biet tron xau
void countEx2(string s)
{
    int digit = 0;
    int alpha = 0;
    int special = 0;
    for (auto s : s)
    {
        if (isdigit(s))
        {
            digit++;
        }
        else if (isalpha(s))
        {
            alpha++;
        }
        else
        {
            special++;
        }
    }
    cout << alpha << " " << digit << " " << special << endl;
}

//Dem so lan xuat hien cac ki tu trong xau
void countEx3(string s)
{
    int count[256] = {0};
    for (char c : s)
    {
        count[c]++;
    }
    for (int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            cout << (char)i << " " << count[i] << endl;
        }
    }
}

//In ra ki tu co so lan xuat hien nhieu nhat
void countEx4(string s)
{
    int count[256] = {0};
    for (char c : s)
    {
        count[c]++;
    }
    int max = 0 ;
    char res;
    for (int i = 0; i < 256; i++)
    {
        if (count[i] >= max)
        {
            max = count[i];
            res = (char) i;
        }
    }
    cout << res << endl;

}

//Cac ki tu xuat hien o ca 2 xau
void countEx5(string s1, string s2)
{
    int count[256] = {0};
    for (char c : s1)
    {
        count[c] = 1; // neu xuat hien o s1 thi gan count = 1;
    }
    for (char c : s2)
    {
        if (count[c] == 1)
        {
            count[c] = 2;
        }
    }
    for (int i = 0 ; i < 256 ;i++)
    {
        if (count[i] == 2)
        {
            cout << char(i) ;
        }
    }

}

// xuat hien o 1 trong 2 thi cho count ca 2 == 1;

int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << ex1(s);
    cout << endl;

    countEx2(s) ;

    cout << endl;

    countEx3(s) ;

    cout << endl;

    countEx4(s) ;

    cin.ignore();
    string s1;
    cout << "Enter a string s1: ";
    getline(cin, s1);

    countEx5(s, s1);

    return 0;
}
