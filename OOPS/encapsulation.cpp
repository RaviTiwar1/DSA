#include <bits/stdc++.h>
using namespace std;

class Account
{
private: // also called Data Hiding
    double balance;
    string password;

public:

    string name;
    int AccNumber;



   // Non-parameterized constructor
    Account()
    {
        cout << "Constructor Called" << endl;
    }
   // parameterized constructor
    Account(string n, int m, double bal)
    {
        name = n;
        AccNumber = m;
        balance = bal;
    }

    ~Account(){
        cout<<"Destructor Called"<<endl;
    }

    void getInfo()
    {
        cout << name << endl;
        cout << AccNumber << endl;
        cout << balance << endl;
    }

    

    void setbalance(double b)
    {                                         // here setting the value for a private member
        balance = b;
    }

    double getBalance()
    {                                        // here getting the value for a private member
        return balance;
    }
};

int main()
{
    cout << endl
         << "----Non-Parameterized------" << endl;
    Account ac;                                             // Constructor call

    ac.name = "Ravi";
    ac.AccNumber = 891523847;
    cout << ac.name << endl;
    cout << ac.AccNumber << endl;
    ac.setbalance(129999);
    cout << "Salary of 1st object: " << ac.getBalance() << endl;

    cout << endl
         << "----Parameterized------" << endl;
    Account ac1("Ravii", 882843343, 250000.0); 

    ac1.getInfo();


    cout<<endl<<"-----Copy Constructor------"<<endl;

    Account ac2(ac1);                                    //Copy Constructor
    ac2.getInfo();

    return 0;
}