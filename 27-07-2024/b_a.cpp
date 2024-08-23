#include<bits/stdc++.h>
using namespace std;
static int k=1;
class Bank
{
    string acc_no;
    float balance;
    string type;
    string cname;
public:
    Bank()
    {
        acc_no="";
        cname="";
        type="";
        balance=0.0;
    }

    void setdata()
    {
        cout<<"ENTER FOR ____ "<<k++<<endl;
        cout<<"Enter AC no. : ";
        cin>>acc_no;
        cout<<"Enter Name : ";
        cin>>cname;
        cout<<"Enter Accout Type : ";
        cin>>type;
        cout<<"Enter Balance : ";
        cin>>balance;
        cout<<endl;
    }
    string getid()
    {
        return acc_no;
    }

    void withdraw(float amt)
    {
        if(amt>balance)
        {
            cout<<"Not enough Balance"<<endl;
            return;
        }
        balance-=amt;
    }
    void deposite(float amt)
    {
        balance+=amt;
    }

    void display()
    {
        cout<<"AC NO.  : "<<acc_no<<endl;
        cout<<"NAME    : "<<cname<<endl;
        cout<<"AC TYPE : "<<type<<endl;
        cout<<"BALANCE : "<<fixed<<setprecision(2)<<balance<<endl<<endl;

    }
};

int main()
{
    int n;
    cout<<"Enter the No of users :" ;
    cin>>n;

    Bank *ac;
    ac = new Bank[n];

    for(int i=0; i<n; i++)
    {
        ac[i].setdata();
    }
    int enter;

    do
    {
        cout<<"If you want to withdraw enter 1 else 2 for deposite"<<endl;
        int cs=0;
        cin>>cs;

        if(cs==1)
        {

            string id;
            cout<<"Enter ID : ";
            cin>>id;
            bool flag=0;
            for(int i=0; i<n; i++)
            {
                string temp ="";
                temp+= ac[i].getid();
                if(temp==id)
                {
                    int amt;
                    cout<<"enter Amount :";
                    cin>>amt;
                    ac[i].withdraw(amt);
                    ac[i].display();
                    flag=1;
                }
            }
            if(!flag)
            {
                cout<<"User not found"<<endl;
            }
        }
        else if (cs==2)
        {
            cout<<"Enter ID : ";
            string id;
            cin>>id;
            bool flag=0;
            for(int i=0; i<n; i++)
            {
                string temp ="";
                temp+= ac[i].getid();
                if(temp==id)
                {
                    int amt;
                    cout<<"enter Amount :";
                    cin>>amt;
                    ac[i].deposite(amt);
                    ac[i].display();
                    flag=1;
                }
            }
            if(!flag)
            {
                cout<<"User not found"<<endl;
            }
        }
        else
        {
            cout<<"Not Valid.. Exiting"<<endl;
            break;
        }



        cout<<"If you want to continue enter 1 else 0"<<endl;
        cin>>enter;


    }
    while(enter);

    delete ac;
}

