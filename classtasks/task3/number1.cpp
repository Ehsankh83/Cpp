#include <iostream>

int main(){
    int a[10] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};
    int* p ;
    p = a ;

    for(int i = 0 ; i < 10 ; i++){
        std:: cout << *p;
        p++ ;
    }

    return 0 ;
}
// Ehsan khakshoor