//
//  main.cpp
//  Hollow DIamond
//
//  Created by Anirudh Singh Rathore on 30/08/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int i, j, n, k=0;
    cout<<"Enter the number n";
    cin>>n;
    
    for (i=1; 1<=n; i++)
    {
        for (j=1; j<=n-1; j++)
        {
            cout<<" ";
        }
        while (k!=(2*i-1))
        {
            if((k==0)||(k==2*i-2))
                cout<<"*";
            else
                cout<<" ";
            k++;
        }
        k=0;
        cout<<endl;
    }
    n--;
    for (i=n; i>=1; i--)
    {
        for (j=0; j<=n-i; j++)
        {
            cout<<" ";
        }
        k=0;
        while (k!=(2*i-1))
        {
            if ((k==0)||(k==2*i-2))
                cout<<"*";
            else
                cout<<" ";
            k++;
        }
        cout<<endl;
    }
}
