
/*Armstrong number is for eg

        153= 1^3 + 5^3 + 3^3        //here ^3 represents number of digits
        153= 1 + 125 + 27
        153 = 153

        mtlb ki total number of digits ko particular digits ke power nikalenge to sum wahi
        digit waps aaega
        */

#include <iostream>
#include <cmath>
using namespace std;

// int power(int r, int a) {                          // for some value pow is not accurate due to floating int values(eg-153)
//     int result = 1;                               // so a power function is made for accurate results 
//     for (int i = 0; i < a; i++) {
//         result *= r;
//     }
//     return result;
// }

int main()
{
        int n, r, a = 0, sum = 0, temp;
        cout << "Enter the Number=  ";
        cin >> n;
        temp = n;

        while (temp != 0)
        {
                temp = temp / 10;
                a++;                // to check number of digits
        }
        temp = n;                   // Store the original number for final comparison
        while (n > 0)
        {
                r = n % 10;
                sum = sum + pow(r, a);
                n = n / 10;
        }
        if (temp == sum)
                cout << "Armstrong Number." << endl;
        else
                cout << "Not Armstrong Number." << endl;
        return 0;
}
