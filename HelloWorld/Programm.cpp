#include<iostream>
#include"Time.h"


/*
* Teuflische Folge:
* Nachfolger:
* n ist gerade: n/2 
* n ist ungerade: 3*n+1
* 7,22,11,34,17,52,26,13,40,20,10,5,16,8,4,2,1
* Collatz
* 
* 
* */
int x = 1;//erst schreiben dann lesen
void
Teufel(int start) {
    int n;

    n = start;
    while (n>0) { 
       // tue was;
        n = n - 1;
        std::cout << n << std::endl;
    }
    return; //ret
}
int main() 
{ 
    std::cout << "Hallo"<<std::endl;
 
    Teufel(7);//call
     return 0;
}