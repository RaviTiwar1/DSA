#include <bits/stdc++.h>
using namespace std;

void calculate(int amount)
{
    int remain = amount;
    int c500 = 0, c100 = 0, c50 = 0, c20 = 0, c10 = 0, c2 = 0, c1 = 0;

    for (int i = 1; i <= 7; i++)
    {
        switch (i)
        {
        case 1:
            c500 = remain / 500;      //1333 ---> 2
            remain = remain % 500;     //1333 ---> 333
            break;
        case 2:
            c100 = remain / 100;
            remain = remain % 100;
            break;
        case 3:
            c50 = remain / 50;
            remain = remain % 50;
            break;
        case 4:
            c20 = remain / 20;
            remain = remain % 20;
            break;
        case 5:
            c10 = remain / 10;
            remain = remain % 10;
            break;

        case 6:
            c2 = remain / 2;
            remain = remain % 2;
            break;
        case 7:
            c1 = remain;
            break;

        default:
            cout << "Enter a positive number!" << endl;
            break;
        }
    }

    cout << "number of 500 notes: " << c500 << endl;
    cout << "number of 100 notes: " << c100 << endl;
    cout << "number of 50 notes: " << c50 << endl;
    cout << "number of 20 notes: " << c20 << endl;
    cout << "number of 10 notes: " << c10 << endl;
    cout << "number of 2 coins: " << c2 << endl;
    cout << "number of 1 coins: " << c1 << endl;
}

int main()
{

    int n;
    cout << "Enter the amount: " ;
    cin >> n;

    if (n > 0)
    {
        calculate(n);
    }
    else
        (
            cout << "Enter a positive amount!";)

            return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b;
//     cout << "Enter number1:";
//     cin >> a;
//     cout << "Enter number2:";
//     cin >> b;

//     char op;
//     cout << "Enter operator:";
//     cin >> op;

//     switch (op)
//     {
//     case '+':
//         cout << a + b << endl;
//         break;
//     case '-':
//         cout << a - b << endl;
//         break;
//     case '*':
//         cout << a * b << endl;
//         break;
//     case '/':
//         cout << a / b << endl;
//         break;
//     case '%':
//         cout << a % b << endl;
//         break;
//     default:
//         cout << "Please enter a valid operation";
//     }
//     return 0;
// }