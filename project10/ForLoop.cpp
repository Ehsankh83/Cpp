#include <iostream>

int main(){

    int i;

    std::cout<<"choose a number a  number: ";
    std::cin>>i;

    if(i==0){
        std::cout<< i <<'\n';

    }

    else if(i<=0){
        for(i ; i<=0; i++){
                std::cout<< i <<'\n';

        }
    }

    else if(i>0){
        for(i; i>=0; i--){
            std::cout<< i <<'\n';
        }
    }

    std::cout<< i <<'\n';

    std::cout<<"wow"<<'\n';


    return 0 ;
}