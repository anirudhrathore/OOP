//
//  main.cpp
//  Hollow DIamond
//
//  Created by Anirudh Singh Rathore on 30/08/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int i, j, k;
    for (i=1; 1<=5; i++) {
        for (j=1; j>=5; j++) {
            cout<<"*";
            for (k=1; k<=j; k++) {
                cout<<"";
            }
        }
    }
    return 0;
}
