//
//  main.cpp
//  Factorial
//
//  Created by Anirudh Singh Rathore on 29/08/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int i, no, fact=1;
    cout<<"Enter a number : ";
    cin>>no;
    for(i=1;i<=no;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial: "<<fact<<endl;
    return (0);
}
