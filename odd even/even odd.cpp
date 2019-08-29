//
//  even odd.cpp
//  C++
//
//  Created by Anirudh Singh Rathore on 24/08/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>
int main()
{
    int n;
    std::cout<<"Enter a number"<<std::endl;
    std::cin>>n;
    if(n%2==0)
    {
        std::cout<<"Number is Even"<<std::endl;
    }
    else
    {
        std::cout<<"Number is Odd"<<std::endl;
    }
    return(0);
}

