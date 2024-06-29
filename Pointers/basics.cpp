#include<bits/stdc++.h>
using namespace std;
int main()
{

    int num=6;
    int *ptr = &num;

    cout<<"Adress of num is "<<ptr<<endl;
    cout<<"Value of num is "<<*ptr<<endl;


    cout<<"Size of num is "<< sizeof(num)<<endl;
    cout<<"Size of pointer is "<< sizeof(ptr)<<endl;      //sometimes 4 but maximum time it will come 8
 return 0;
}