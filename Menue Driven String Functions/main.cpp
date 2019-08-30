//
//  main.cpp
//  Menue Driven String Functions
//
//  Created by Anirudh Singh Rathore on 30/08/19.
//  Copyright © 2019 Anirudh Singh Rathore. All rights reserved.
//

#include <iostream>

using namespace std;

char ch;
char *str1, *str2;

int main() {
    
    switch(ch){
        case 1:
            cout<<"\n Enter a String: ";
            cin>>str1;
            cout<<"\n Length of String "<<str1<<" is: "
            <<Str_Length(str1);
            break;
        case 2:
            cout<<"\n Enter 1st String: ";
            cin>>str1;
            cout<<"\n Enter 2nd String: ";
            cin>>str2;
            num = Str_Comp(str1, str2);
            if(num == 0)
                cout<<"\n String str1: "<<str1
                <<" & String str2: "<<str2<<"
                are Equal";
                else if(num < 0)
                    cout<<"\n String str1: "<<str1
                    <<" is Smaller than String str2: "
                    <<str2;
                else
                    cout<<"\n String str1: "<<str1
                    <<" is Greater than String str2: "
                    <<str2;
            break;
        default:
            delete(str1);
            delete(str2);
        case 3:
            cout<<"\n Enter a String: ";
            cin>>str1;
            cout<<"\n Reverse String "<<str1<<" is: ";
            Str_Reverse(str1, str2);
            cout<<str2;
            break;
        case 4:
            cout<<"\n Enter a String: ";
            cin>>str1;
            break;
        
            exit(1);
    } // end of switch.
    return 0;
}
