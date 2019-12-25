//
//  main.cpp
//  Class to represent bank account (ma'am)
//
//  Created by Anirudh Singh Rathore on 06/09/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;

class bank{
    int acc_no;
    char acc_type[20], name[30];
    float bal;
public:
    void setdata(int a, char *at, char *n, float b)
    {
        acc_no = a;
        strcpy(acc_type, at);
        strcpy(name, n);
        bal = b;
    }
    void deposit()
    {
        int d_amt;
        cout<<"Enter the deposit amount "<<endl;
        cin>>d_amt;
        bal = bal + d_amt;
        cout<<"New Balance : "<<bal<<endl;
    }
    void withdraw()
    {
        int w_amt;
        cout<<"Enter the amount withdrawn : "<<endl;
        cin>>w_amt;
        if(w_amt>bal)
        {
            cout<<"Withdrawl not possible"<<endl;
        }
        else
        {
            bal = bal - w_amt;
        }
        cout<<"New Balance is : "<<bal<<endl<<endl;
    }
    void display()
    {
        cout<<"Bank details are :"<<endl<<"The account number is : "<<acc_no<<endl<<"The acount type is : "<<acc_type<<endl<<"The name of the bank holder is : "<<name<<endl<<"The remaining balance is : "<<bal<<endl;
    }
};

int main() {
    bank b;
    int ac;
    float balance;
    char m[40], act[20];
    
    cout<<"Enter the account details - "<<endl;
    cout<<"Enter Account Number : ";
    cin>>ac;
    cout<<"Enter the Balance : ";
    cin>>balance;
    cout<<"Enter the Account holder's name : ";
    cin>>m;
    cout<<"Enter the Account type : ";
    cin>>act;
    cout<<endl;
    b.setdata(ac, act, m, balance);
    b.deposit();
    b.withdraw();
    b.display();

    return 0;
}
