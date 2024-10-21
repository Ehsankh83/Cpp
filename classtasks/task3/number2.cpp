#include <iostream>

int main(){
    int a = 10 , b = 20 ;
    int* p = &a ;
    int* q = &b ;
    int** pn = &p ;
    int** qn = &q ;

    std:: cout << **pn + **qn ;
    return 0 ;
}