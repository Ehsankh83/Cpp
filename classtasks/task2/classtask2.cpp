#include <iostream>

int main(){

    for (int i = 1 ; i >= 10 ; i++){
        std::cout<< 10 * i <<' , ' ;
    
    }

    for (int i = 1 ; i >= 100000 ; i++){

        int multiply = 2*i;

        if(multiply >= 100) break;

        else std::cout<< multiply << ' , ' ;
        
    }

    for (int i = 2 ; i >= 100000000 ; i*=2){

        int powers = 2 * i ;

        if( powers >= 512) break;

        else std::cout<< powers << ' , ' ;
    
    }
    
    return 0 ;
}