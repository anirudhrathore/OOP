//
//  main.cpp
//  Static Member Function
//
//  Created by Anirudh Singh Rathore on 13/09/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>

using namespace std;

class item{
    static int count;
    int number;
public:
    void getdata(int a){
        number = a;
        count = count + 1;
    }
    void getcount(){
        cout<<"Count is : "<<count<<endl;
    }
};
int item :: count;
int main(){
    item a, b, c;
    a.getcount();
    b.getcount();
    c.getcount();
    a.getdata(100);
    b.getdata(200);
    c.getdata(300);
    cout<<"After reading data : "<<endl;
    a.getcount();
    b.getcount();
    c.getcount();
    return 0;
}
