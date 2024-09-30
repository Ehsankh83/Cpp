#include <iostream>

int main(){
    std::string name , lastname;
    int age ;
    std::cout<<"please enter your name : ";
    std::cin>> name ;
    std::cout<<"please enter your last name : ";
    std::cin>> lastname ;
    std::cout<<"how old are you ? : " ;
    std::cin>> age ;
    std::cout<< name <<" "<<lastname<<" is "<<age<<" years old.";
    return 0 ;
}