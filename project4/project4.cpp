#include <iostream>

int main(){

    double x = 3.14;
    double y = (int) 3.14;
    char z = 100;


    std::cout << x <<'\n';
    std::cout << y <<'\n';
    std::cout << z <<'\n';
    std::cout << (char)100 <<'\n';

    int age;
    std::string name;
    std::cout<<"what's your name ?";
    std::getline(std::cin >> std::ws, name); //if user enter something1 (space) something 2 program will take the something1
    //but to prevent that we use getline function
                                
    std::cout<<"hello " << name <<'\n' << " what's ur age ?";

    std::cin >>age;


    std::cout<<"u are " << age << " years old !";




    return 0 ;
}