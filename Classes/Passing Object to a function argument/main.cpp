//
//  main.cpp
//  Passing Object to a function argument
//
//  Created by Anirudh Singh Rathore on 13/09/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>

using namespace std;

class sample
{
    int a, b;
public:
    void setvalue(){
        a = 25; b = 40;
    }
    friend float mean(sample s);
};
float mean(sample s){
    return float((s.a+s.b)/2.0);
}
int main() {
    sample x;
    x.setvalue();
    cout<<"Mean value is : "<<mean(x)<<endl;
    return 0;
}
