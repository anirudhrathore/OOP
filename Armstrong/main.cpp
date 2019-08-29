//
//  main.cpp
//  Armstrong
//
//  Created by Anirudh Singh Rathore on 29/08/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num;
    int f,rem,sum=0,temp,a=0;
    cout<<"Enter any number : ";
    cin>>num;
    temp=num;
    while(temp != 0)
    {
        temp=temp/10;
        a=a+1;
    }
    f=num;
    while(f!=0)
    {
        rem=f%10;
        sum = sum + pow(rem,a);
        f=f/10;
    }
    
    if( sum == num )
        cout<<"The number is Armstrong \n";
    else
        cout<<"The number is not an Armstrong \n";
}
