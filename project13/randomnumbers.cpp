#include <iostream>
#include <ctime>

//pseudo-random = not truly random (but close)

int main(){

    srand(time(NULL));  //this function will generate a random number between 0 and 32767

    int num1  = (rand() % 6) + 1; //we do this for a six sided dice

    int num2  = (rand() % 20) + 1; //if i needed a 20-sided dice i do this

    int num3  = (rand() % 2) + 1; // or a coin flip

    int num4  = (rand() % 100) + 1; //a random number between 1 and 100

    std::cout << num1 <<'\n';
    std::cout << num2 <<'\n';
    std::cout << num3 <<'\n';
    std::cout << num4 <<'\n';

    return 0 ;
}