#include <iostream>
#include <ctime>

int main(){
    
    int tries;
    int guess;
    int num;

    srand(time(NULL));
    num = (rand() % 100) +1;

    std::cout<<"<<<<<<<<<<<<<<Number guessing game >>>>>>>>>>>>>>>>>>>"<<'\n';
    std::cout<<"Please enter a number between 1 and 100 : ";

    do{
        std::cin>>guess;
        tries++;

        if(guess < num){
            std::cout<<"too low !"<<'\n';
        }

        else if(guess >num){
            std::cout<<"too high !"<<'\n';
        }

        else{
            std::cout<<"CORRECT ! " << "it took "<< tries <<" tries !"<<'\n';

        }

    }while(guess != num);
    
    std::cout<<"***********************************************"<<'\n';
    



    return 0 ;
}