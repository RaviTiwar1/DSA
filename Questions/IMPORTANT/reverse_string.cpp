#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cout << "Enter a String: ";
    getline(cin, s);
    cout << "String before Reverse is : " << s << endl;

    int start = 0;
    for (int i = 0; i < s.length(); i++)
    {                                                      
        if (s[i] == ' ')                                    
        {
            reverse(s.begin() + start, s.begin() + i);      //Reverse each word
            
            start = i + 1;
        }
    }

    reverse(s.begin() + start, s.end());          // to reverse last word

    cout << "String after Reverse is :"<<s<<endl;

    return 0;
}


//bina library ke use ka 

// #include <iostream>
// #include <string.h>
// using namespace std;
// int main()
// {
//     string s;
//     cout << "Enter a String: ";
//     getline(cin, s);
//     cout << "String before Reverse is : " << s << endl;
//     int start = 0;
//     int p = 0;
//     for (int i = 0; i <= s.length(); i++)
//     {
//         if (s[p] == ' ' || s[p] == '\0')
//         {
//             int end = p - 1;
//             while (start <= end)
//             {
//                 swap(s[start],s[end]);
//                 start++;
//                 end--;
//             }
//             start=p+1;
//         }
//         p++;
//     }
//    cout << "String after Reverse is :"<<s<<endl;
// }