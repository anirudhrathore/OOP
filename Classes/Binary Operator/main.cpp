//
//  main.cpp
//  Binary Operator
//
//  Created by Anirudh Singh Rathore on 11/10/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>

using namespace std;

class New
{
    int x;
public:
    void setvalue(int p)
    {
        x = p;
    }
    void getvalue()
    {
        cout<<"Value of x : "<<x<<endl;
    }
    friend New operator*(New obj1, New obj2);
};
New operator*(New obj1, New obj2)
{
    New n3;
    n3.x = obj1.x*obj2.x;
    return n3;
}

int main() {
    New n1, n2, n3;
    n1.setvalue(5);
    n2.setvalue(10);
    n3 = n1*n2;
    n1.getvalue();
    n2.getvalue();
    n3.getvalue();
}
