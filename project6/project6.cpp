#include <iostream>

int main(){

    int number;
    int grade ;
    std::cout << "please enter grade :" <<'\n' ;
    std:: cin >> grade ;

    if(grade <= 20 && grade >= 10 ){
        std::cout << "YOU PASSED YAAAAAAAAAAAY !" <<'\n' ;
    }
    else if (grade > 20){
        std::cout << "grade must be between (0-20)" <<'\n' ;
        
    }

    else{
        std::cout << "YOU DIDN'T PASS NOOOOOOOOOOOOOO !" <<'\n' ;
    }

    std::cout << "enter a number : " <<'\n' ;
    std:: cin >> number ;

    number % 2 == 1  ? std::cout<<"ODD"<<'\n' : std::cout<<"EVEN"<<'\n';

    bool sunny = true;

    if(sunny){
        std::cout << "its sunny outside" <<'\n' ;
    }
    else if(!sunny){
        std::cout << "its not sunny outside aaaaaaaaaaaaaaaaaagh " <<'\n' ;

    }

    return 0 ;

}