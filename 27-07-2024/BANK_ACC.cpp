#include<bits/stdc++.h>
using namespace std;

class Bank
{
    string acc_no;
    float balance;
public:
    Bank()
    {
        cout<<"Enter AC no. : ";
        cin>>acc_no;
        cout<<"Enter Balance : ";
        cin>>balance;
    }

    void withdraw(float amt)
    {
        balance-=amt;
    }
    void deposite(float amt)
    {
        balance+=amt;
    }

    void display()
    {
        cout<<"AC NO. : "<<acc_no<<endl;
        cout<<"BALANCE : "<<fixed<<setprecision(2)<<balance<<endl<<endl;
    }
};

int main()
{
    Bank ac1,ac2;
    ac1.withdraw(250);
    ac2.deposite(3500);
    ac1.display();
    ac2.display();
}
