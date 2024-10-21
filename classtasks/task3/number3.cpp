#include <iostream>

int main(){
    char a[5] = {'b','c','d','a','e'} ;
    char* p = a ;

    for(int i = 0 ; i < 5 ; i++){
        if(*p== 'a'){
            std::cout<<"I found the a ! its in slot number " << i << '\n' ;
        }
        p++ ;
    }

    return 0 ;
}
// Ehsan khakshoor