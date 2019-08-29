//
//  main.cpp
//  Pallindrome
//
//  Created by Anirudh Singh Rathore on 29/08/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int a,no,b,temp=0;
    cout<<"Enter any num : ";
    cin>>no;
    b=no;
    while(no>0)
    {
        a=no%10;
        no=no/10;
        temp=temp*10+a;
    }
    if(temp==b)
    {
        cout<<"Palindrome \n";
    }
    else
    {
        cout<<"Not Palindrome \n";
    }
    return 0;
}
