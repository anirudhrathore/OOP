//
//  main.cpp
//  2D  Array
//
//  Created by Anirudh Singh Rathore on 05/09/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>

using namespace std;

const int x = 3;
const int y = 3;

int sum(int f[x][y], int s[x][y])
{
    int i, j;
    int sum[x][y];
    sum[x][y] = f[x][y] + s[x][y];
    for (i=0; i<x; i++)
    {
        for (j=0; j<y; j++)
        {
            cout<<sum[i][j];
        }
}

int main() {
    int x, y, i, j, a, s, m;
    int first[10][10], second[10][10];
    
    cout<<"Enter the elements of the first matrix :";
    for (i=0; i<x; i++)
    {
        for (j=0; j<y; j++)
        {
            cin>>first[i][j];
        }
    }
    
    cout<<"Enter the elements of the second matrix :";
    for (i=0; i<x; i++)
    {
        for (j=0; j<y; j++)
        {
            cin>>second[i][j];
        }
    }
    
    a = sum(first, second);
    
    return 0;
}
