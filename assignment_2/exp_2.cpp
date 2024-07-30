#include<bits/stdc++.h>
using namespace std;

static int cnt=1;

class BankAC{
    char name[20];
    int acc_no;
    char type[10];
    float balance;
public:
    BankAC(){
        acc_no=cnt++;
        cout<<"Enter name for acc_no "<<acc_no<<" : ";
        cin>>name;
        cout<<"Type : ";
        cin>>type;
        cout<<"Enter Balance : ";
        cin>>balance;
        cout<<endl;
    }

    void deposite(float amt){
        balance+=amt;
    }

    void withdraw(float amt){
        if(amt>balance){
            cout<<"Not enough balance to withdraw !"<<endl;
            return;
        }
        balance-=amt;
    }

    int get_id(){
        return acc_no;
    }

    void display(){
        cout<<"NAME : "<<name<<endl;
        cout<<"ACC_NO : "<<acc_no<<endl;
        cout<<"TYPE : "<<type<<endl;
        cout<<"Balance : "<<balance<<endl<<endl;
    }
};

int main()
{
    int n;
    cout<<"How many acc you want to add : ";
    cin>>n;

    BankAC *b;
    b = new BankAC[n];

    int ent;
    int t_id;
    do{
        cout<<"Enter 1 for deposite, 2 for withdraw : ";
        int choice;
        cin>>choice;

        if(choice==1){
            cout<<"enter id : ";
            cin>>t_id;
            cout<<"Enter Amt : ";
            float amt;
            cin>>amt;
            int i;
            for(i=0;i<n;i++){
                if(b[i].get_id()==t_id){
                    b[i].deposite(amt);
                    b[i].display();
                    break;
                }
            }
            if(i==n){
                cout<<"ID not found"<<endl;;
            }
        }else if(choice==2){
            cout<<"enter id : ";
            cin>>t_id;
            cout<<"Enter Amt : ";
            float amt;
            cin>>amt;
            int i;
            for(i=0;i<n;i++){
                if(b[i].get_id()==t_id){
                    b[i].deposite(amt);
                    b[i].display();
                    break;
                }
            }
            if(i==n){
                cout<<"ID not found"<<endl;
            }
        }else{
            cout<<"INVALID !!"<<endl;
        }
        cout<<"If you want to continue enter 1, for exit enter 0"<<endl;
        cin>>ent;
    }while(ent);
}