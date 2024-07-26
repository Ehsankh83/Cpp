#include <iostream>

int main(){
    int i;

    //break exits
    for(i =20; i>=0 ; i--){

        if(i==13){
            std::cout<<"BYE !??!?!?" <<'\n';
            break;
        }

        std::cout<<i <<'\n';
    }

    std::cout<<"-------------------------" <<'\n';

    //but continue skips that part
    for(i =20; i>=0 ; i--){

        if(i==13){
            std::cout<<"skipped" <<'\n';
            continue;
        }

        std::cout<<i <<'\n';
    }

    return 0 ;
}