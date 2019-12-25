//
//  main.cpp
//  Paramaterized Constructor
//
//  Created by Anirudh Singh Rathore on 27/11/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>
using namespace std;

class Point{
    int x, y;
public:
    Point(int a, int b){
        x=a;
        y=b;
    }
    void show(){
        cout<<"Value of x and y are : "<<x<<" "<<y<<endl;
    }
};

int main() {
    //Point P;
    Point p1(100, 200);
    Point p2(30, 40);
    p1.show();
    p2.show();
    return 0;
}
