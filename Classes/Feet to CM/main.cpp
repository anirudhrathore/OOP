//
//  main.cpp
//  Feet to CM
//
//  Created by Anirudh Singh Rathore on 20/09/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>

using namespace std;
class dm;
class df{
    int f, i;
public:
    void enter(){
        cout<<"Enter the distance in feet :"; cin>>f;
        cout<<"Enter the distance in inches :"; cin>>i;
    }
    friend int sum(df,dm);
    void display(){
//        cout<<"The total distance in cm is : "<<convert()<<endl;
    }
};

class dm{
    int m, cm;
public:
    void enter(){
        cout<<"Enter the distance in meter :"; cin>>m;
        cout<<"Enter the distance in centimeter :"; cin>>cm;
    }
    friend int sum(df,dm);
//    int convert(){
//        float m_cm, add;
//        m_cm = m*100;
//        add = m_cm + cm;
//        return add;
//    }
    void display(){
//        cout<<"The total distance in cm is : "<<convert()<<endl;
    }
};
int sum(df d,dm m)
{ int ch;
    switch (ch) {
        case 1:
            int f_cm = d.f*30.48;
            int i_cm = d.i*2.54;
            int s=f_cm+i_cm;
            break;
        default:
            break;
    }
    int f_cm = d.f*30.48;
    int i_cm = d.i*2.54;
    int s=f_cm+i_cm;
    int sum=s+m.cm;
    return(sum);
    
}
int main() {
    df d1;
    d1.enter();
//    d1.convert();
    //cout<<"The total distance for feet and inches is : ";
    d1.display();
    dm d2;
    d2.enter();
//    d2.convert();
    //cout<<"The total distance for m and cm is : ";
    d2.display();
    int a=sum(d1,d2);
    cout<<a<<endl;
}
