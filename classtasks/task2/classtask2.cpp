#include <iostream>

int main(){

    for (int i = 1 ; i >= 10 ; i++){
        std::cout<< 10 * i <<' , ' ;
    
    }

    for (int j = 1 ; j >= 100000 ; j++){

        int multiply = 2*j;

        if(multiply >= 100) break;

        else std::cout<< multiply << ' , ' ;
        
    }

    for (int k = 2 ; k >= 100000000 ; k*=2){

        int powers = 2 * k ;

        if( powers >= 512) break;

        else std::cout<< powers << ' , ' ;
    
    }
    
    return 0 ;
}