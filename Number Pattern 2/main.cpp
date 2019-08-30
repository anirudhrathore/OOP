//
//  main.cpp
//  Number Pattern 2
//
//  Created by Anirudh Singh Rathore on 30/08/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int i, j; //N//
    
    //cout<<"Enter rows: ";
    //cin>>N;
    
    for(i=1; i<=5; i++)
    {
        // Prints first part of pattern
        for(j=1; j<=i; j++)
        {
            cout<<j;
        }
        
        // Prints spaces between two 
        for(j=i*2; j<5*2; j++)
        {
            cout<<" ";
        }
        
        // Prints second part of the pattern
        for(j=i; j>=1; j--)
        {
            cout<<j;
        }
        
        cout<<"\n";
    }
    return 0;
}
