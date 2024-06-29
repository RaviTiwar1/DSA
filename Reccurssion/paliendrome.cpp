#include <bits/stdc++.h>
using namespace std;

// with Reccursion

bool f(int i, string S)
{
    if (i >= S.size() / 2) // for checking till middle element
        return true;
    if (S[i] != S[S.size() - i - 1]) // for checking the element is equal or not
        return false;
    return f(i + 1, S);
}

// Without Reccursion
bool f1(string S)
{
    int st = 0;
    int e = S.size() - 1;

    while (st <= e)
    {
        if (tolower(S[st]) != tolower(S[e]))
        {
            return 0;
        }
        else
        {
            st++;
            e--;
        }
    }

    return 1;
}

int main()
{

    string S;
    cout << "Enter the string:";
    cin >> S;
    int n = f1(S);
    if (n == 1)
        cout << "Is Paliendrome";
    else
        cout << "Not a Paliendrome";

    return 0;
}
