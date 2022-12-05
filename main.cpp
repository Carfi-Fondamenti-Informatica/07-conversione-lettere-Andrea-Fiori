#include <iostream>
#include "lib.h"
using namespace std;
int main(){
   char a=0;
    cin >> a;
    if (Ver(a)){
       cout <<  Conv(a);
    }else
        cout << "errore";

  return 0;
}
