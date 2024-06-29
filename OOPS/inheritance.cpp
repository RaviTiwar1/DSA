#include <bits/stdc++.h>
using namespace std;

class Account
{
public:
    string name;
    int AccNumber;
    double balance;

    Account(){
        
    }
   
};

class Customer : public Account{                //inheritance
public:
    void getInfo(){
        cout<<name<<endl;

    }

};

int main()
{

    Account ac; // Constructor call

    ac.name = "Ravi";
    ac.AccNumber = 891523847;
    cout << ac.name << endl;
    cout << ac.AccNumber << endl;

    Customer c;
    c.name="hehe";
    c.getInfo();
   

    return 0;
}