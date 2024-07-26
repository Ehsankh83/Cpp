#include <iostream>

int main(){

    int number;

    do {
        std::cout<<"Enter a + number :";
        std::cin>> number;
    }while(number < 0);

    std::cout<<"ty for the + number";
    
    return 0 ;
}