//
// Created by ADMIN on 11/15/2024.
//

#include "textNormalizationAndProcessing.h"

// liet ke cac tu xuat hien trong cau

void wordTokenization(string s)
{
    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        cout << word << endl;
    }
}

//dem so luong tu trong cau
int countWord(string s)
{
    stringstream ss(s);
    string temp;
    int count = 0;
    while (ss >> temp)
    {
        ++count;
    }
    return count;
}

//sap xep cac tu trong xau


void sortWord(string s)
{
    vector<string> vector;
    stringstream ss(s);
    string temp;
    while (ss >> temp) // ss con nhap duoc temp
    {
        vector.push_back(temp);
    }
    sort(vector.begin(), vector.end()); // tang dan, muon giam dan thi them greater<data_type>();
    for (string word : vector)
    {
        cout << word << endl;
    }
}

// sap xep tu theo chieu dai tang dan, neu co cung chieu dai thi sap xep theo tu dien

bool comparator(string a, string b) // ham comparator de sap xep theo user dinh nghia
{
    if (a.size() != b.size())
    {
        return a.size() < b.size();
    }
    return a < b;
}

void sortWord2(string s)
{
    vector<string> vector;
    stringstream ss(s);
    string temp;
    while (ss >> temp)
    {
        vector.push_back(temp);
    }
    sort(vector.begin(), vector.end(), comparator);
    for (string word : vector)
    {
        cout << word << " ";
    }
}


//Chuan hoa ten dung cau truc
void convert(string &s)
{
    s[0] = toupper(s[0]);
    for (int i = 1 ; i < s.size() ; i++)
    {
        s[i] = tolower(s[i]);
    }
}

void nameNormalization(string s)
{
    stringstream ss(s);
    vector<string> vector;
    string word ;
    while (ss >> word)
    {
        vector.push_back(word);
    }
    for (int i = 0 ; i < vector.size() ; i++)
    {
        convert(vector[i]);
        cout << vector[i] << " ";
    }
}

int main()
{
    string s;
    cout << "Enter text:" << endl;
    getline(cin, s);
    wordTokenization(s);
    cout << "Text have: " << countWord(s) << " words" << endl;

    cout << endl;
    cout << "Word of text after sort: ";
    sortWord(s);

    cout << endl;

    cout << "Word of text after sort2: ";
    sortWord2(s);

    cout << endl;

    string name;
    cout << "Name before normalization: ";
    getline(cin, name);
    cout << endl;
    cout << "Name after normalization: ";
    nameNormalization(name);


    return 0;
}
