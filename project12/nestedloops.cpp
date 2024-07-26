#include <iostream>

int main(){

    int i = 1;
    int j = 1;

    for (i = 1; i <4 ; i++){

        for (j = 1; j <=10 ; j++){
            
            std::cout << j;
        }
        
        std::cout << '\n';
    }
    
    return 0 ;
}