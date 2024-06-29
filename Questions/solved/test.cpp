#include <iostream>
#include <string>
using namespace std;

int countCharactersInLastWord(const string& str) {
    int count = 0;
    int i = str.length() - 1;

    // Skip trailing spaces
    while (i >= 0 && str[i] == ' ') {
        i--;
    }

    // Count characters until space or beginning of string
    while (i >= 0 && str[i] != ' ') {
        count++;
        i--;
    }

    return count;
}

// int main() {
//     string input;
//     cout << "Enter a long string: ";
//     getline(cin, input);

//     int count = countCharactersInLastWord(input);
//     cout << "Number of characters in the last word: " << count << endl;

//     return 0;
// }
// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//   string str = "Ravi Prakash Tiwari ";
//   int count = 0;

//   for (int i = 0; i < str.length(); i++) {
//     if(str[i]==' '){
//         continue;
//     }
//     count++;
//   }

//   cout << "The number of characters in the string is: " << count << endl;

// int count =5;
// string ch = to_string(count);

// cout<<ch;
//     char ch;
//     cout<<"Enter a character: ";
//     cin>>ch;

//     if(islower(ch)){
//         cout<<"lowercase"<<endl;

//     }
//     else if(isupper(ch)){
//         cout<<"Uppercase"<<endl;

//     }
//     else if(isdigit(ch)){
//         cout<<"numeric!"<<endl;
//     }
//     else{
//         cout<<"Special Character!";
//     }

//   return 0;

// #include <iostream>
// #include <string>

// using namespace std;

// int main() {

//     int n;
//     cout<<"Enter the value for n:";
//     cin>>n;
//     int row=1;
//     int value=row;
//     while(row<=n){
//         //pehla wala triangle
//         int cols=1;
//         while(cols<=n-row+1){
//             cout<<cols;
//             cols++;
//         } 

//         //dusra wala triangle
//         int start=row-1;
//         while(start){
//             cout<<"**";
//             start--;
//         }
//         //teesra wala traingle
//         while(cols>=2){
//             cout<<cols-1;
//            cols--;
//         } 
//         cout<<endl;
//         row++;
//     }

//     return 0;
// }
    
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {

//     int n;
//     cin>>n;


//     vector<bool> prime(n+1,true);

//     cout<<prime[0]<<"----"<<prime[1];
//  return 0;
// }



