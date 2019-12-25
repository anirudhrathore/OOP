//
//  main.cpp
//  Constructor Overloading
//
//  Created by Anirudh Singh Rathore on 27/11/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>
using namespace std;

class Complex{
    float x, y;
public:
    Complex(){}
    Complex(float a){
        x=y=a;
    }
    Complex(float real, float imag){
        x=real;
        y=imag;
    }
    friend Complex sum(Complex, Complex);
    friend void show(Complex);
};
Complex sum(Complex c1, Complex c2){
    Complex c3;
    c3.x=c1.x + c2.x;
    c3.y=c1.y + c2.y;
    return (c3);
}
void show(Complex c){
    cout<<c.x<<" + i"<<c.y<<endl;
}
int main() {
    Complex A;
    Complex B(0.5);
    Complex C(2.3, 3.2);
    A = sum(B, C);
    cout<<"B = "<<show(B)<<endl;
    cout<<"C = "<<show(C)<<endl;
    cout<<"A = "<<show(A)<<endl;
    return 0;
}
