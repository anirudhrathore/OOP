//
//  main.cpp
//  Unary Operator
//
//  Created by Anirudh Singh Rathore on 11/10/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>

using namespace std;

class space
{
    int x, y, z;
    public :
    void setvalue(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void display()
    {
        cout<<"Value of x : "<<x<<endl;
        cout<<"Value of y : "<<y<<endl;
        cout<<"Value of z : "<<z<<endl; 
    }
    void operator -();
};
void space::operator -()
{
    x = -x;
    y = -y;
    z = -z;
}
int main()
    {
        space s;
        s.setvalue(10, 20, 30);
        cout<<"S : "<<endl;
        s.display();
        -s;
        cout<<"-S : "<<endl;
        s.display();
    }
