#include "lib.h"
#include <iostream>
bool Ver(char a){
    int b;
    b=(int)a;
    if(65<=b && b<=90)
        return true;
    else if (97<=b && b<=122)
        return true;
    else
        return false;
}
char Conv (char a){
    char b;
    if (((int) a)<=90 && ((int) a)>=65)
    b= ((int (a)+32));
    else if (((int) a)<= 122 && ((int) a) >= 97)
        b= ((int (a)-32));
    return b;
}
