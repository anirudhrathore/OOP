//
//  main.cpp
//  Default Constructor
//
//  Created by Anirudh Singh Rathore on 27/11/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>
using namespace std;

class Demo{
    int x, y;
public:
    //Demo(){
    //}
    Demo(int a, int b){
        x=a;
        y=b;
    }
    Demo(int p){
        x=y=p;
    }
    void show(){
        cout<<x<<endl;
    }
};
int main() {
    //Demo D;
    Demo D1(7,8);
    Demo D2(6);
   // Demo d4 = Demo(9,10);//
    return 0;
}

