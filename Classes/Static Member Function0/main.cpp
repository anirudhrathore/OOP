//
//  main.cpp
//  Static Member Function0
//
//  Created by Anirudh Singh Rathore on 13/09/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>

using namespace std;

class test{
    int code;
    static int count;
public:
    void setcode(){
        code = 1 + count;
    }
    void showcode(){
        cout<<"Object No. "<<code<<endl;
    }
    static void showcount(){
        cout<<"Count : "<<count<<endl;
    }
};
int test :: count;

int main() {
    test t1, t2;
    t1.setcode();
    t2.setcode();
    test :: showcount();
    test t3;
    t3.setcode();
    test :: showcount();
    t1.showcode();
    t2.showcode();
    t3.showcode();
    return 0;
}
