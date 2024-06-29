
// ek string me jo character maximum time ho wo btana hai

#include <bits/stdc++.h>
using namespace std;

char getMaxCharacter(string s)
{

    int arr[26] = {0};

    // for counting the numbers

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        if (ch >= 'a' && ch <= 'z')           // lowercase 
        {
            number = ch - 'a';
        }
        else
        {
            number = ch - 'A';                 // for uppercase
        }
        arr[number]++;
    }

    // for checking maximum occuring

    int max = -1, ans = 0;

    for (int i = 0; i < 26; i++)
    {
        if (max < arr[i])
        {
            ans = i;
            max = arr[i];
        }
    }

    return 'a' + ans;
}
int main()
{
    string s;
    cout << "Enter the String: ";
    getline(cin, s);

    cout << "Maximum character in the char array is-> " << getMaxCharacter(s) << endl;

    return 0;
}