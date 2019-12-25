//
//  main.cpp
//  Copy Constructor
//
//  Created by Anirudh Singh Rathore on 28/11/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>
using namespace std;

class code{
    int id, x;
public:
    code(){}
    code(int a){
        id=a;
    }
    code(code const &<x){
         id=x.d;
    }
    void display(){
         cout<<id<<endl;
    }
};
         
int main() {
         code A(100);
         code B(A);
         code C=A;
         code D;
         D=A;
         cout<<"id of A :";
         cout<<A.display()<<endl;
         cout<<"id of B :"<<B.display()<<endl;
         cout<<"id of C :"<<C.display()<<endl
         cout<<"id of D :"<<D.display()<<endl
    return 0;
}
