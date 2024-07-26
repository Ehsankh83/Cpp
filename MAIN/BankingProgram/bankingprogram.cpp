#include <iostream>
#include <iomanip>


void showbalance(double balance);
double deposite();
double withdraw(double balance);

int main(){

    double balance = 0;
    int choice = 0;
    int newVar = 0;

    do{    

    std::cout <<"***************************"<<'\n';
    std::cout <<"Enter your choice : "<<'\n';
    std::cout <<"***************************"<<'\n';
    std::cout << "1. Show balance"<<'\n';
    std::cout << "2. Deposite money"<<'\n';
    std::cout << "3. Withdraw money"<<'\n';
    std::cout << "4. Exit"<<'\n';

    std::cin >> choice ;

    switch(choice){

        case 1: showbalance(balance);
                break;

        case 2: balance += deposite();
                showbalance(balance);
                break;

        case 3: balance -= withdraw(balance);
                showbalance(balance);
                break;

        case 4: std::cout << "Thacks for visiting !"<<'\n';
                break;

        default: std::cout << "invalid choice "<<'\n';
    }

    }while(choice != 4);



    return 0 ;
}

void showbalance(double balance){
    std::cout << "Your balance is : $" << std::setprecision(2) << std::fixed << balance << '\n' <<'\n';    
}

double deposite(){

    double amount = 0;
    std::cout << "Enter amount to be deposited : "<<'\n';
    std::cin >> amount ;

    if(amount > 0){
        return amount;
    }

    else{
        std::cout << "That's not a valid amont: "<<'\n';
        return 0;
    }

    
}

double withdraw(double balance){
    double amount = 0;

    std:: cout << "Enter amount to be withdrawn : " ;
    std::cin >> amount ;

    if(amount > balance){
        std::cout << "insufficiet funds \n" ;
        return 0;
    }

    else if(amount < 0){
        std::cout << "that's not a valid amount \n" ;

        return 0;
    }

    else{
        return amount;
    }

}