//
//  main.cpp
//  Vector
//
//  Created by Anirudh Singh Rathore on 13/09/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>
using namespace std;

class array1{
    float a[100];
    int n;
public:
    void setarray(){
        cout<<"Enter the size of array : ";
        cin>>n;
        for (int i = 0; i<n; i++) {
            cin>>a[i];
        }
    }
    void multiply(){
        float m;
        cout<<"Enter a scalar multiplier : ";
        cin>>m;
        for (int i = 0; i<n; i++) {
            a[i] = m*a[i];
        }
    }
    void modify(){
        cout<<"Modified array : ";
        for (int i = 0; i<n; i++) {
            cout<<a[i]<<", ";
        }
    }
    int display(){
        float a[100];
        for (int i = 0; i<n; i++) {
        cout<<a[i];
        }
        return 0;
    }
};

int main() {
    array1 a1;
    a1.setarray();
    a1.modify();
    a1.multiply();
    a1.display();
    return 0;
}
