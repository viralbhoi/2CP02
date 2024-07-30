#include<bits/stdc++.h>
using namespace std;

class Employee{
    char id[10];
    char name[20];
    char dept[10];
    float salary;
public:
    Employee(){
        cout<<"Enter details : "<<endl;
        cout<<"ID : ";
        cin>>id;
        cout<<"NAME : ";
        cin>>name;
        cout<<"DEPARTMENT : ";
        cin>>dept;
        cout<<"SALARY : ";
        cin>>salary;
    }

    float get_salary(){
        return salary;
    }

    void display(){
        cout<<"NAME : "<<name<<endl;
        cout<<"ID : "<<id<<endl;
        cout<<"DEPARTMENT : "<<dept<<endl;
        cout<<"SALARY : "<<fixed<<setprecision(2)<<salary<<endl;
    }

};

int main()
{
    int n;
    cout<<"ENTER NO. OF EMPLOYEE : ";
    cin>>n;

    Employee *e;
    e= new Employee[n];

    float s;
    cout<<"ENTER SALARY YOU WANT : ";
    cin>>s;

    for(int i=0;i<n;i++){
        if(e[i].get_salary()>=s){
            e[i].display();
        }
    }
}