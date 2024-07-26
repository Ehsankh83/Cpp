#include <iostream>
#include <vector>

typedef std::string text_t;
//typedef int number_t;
using number_t = int;        //another way of reserved keyword

int main (){
    text_t firstname = "bro";
    number_t babai = 3;

    std::cout << firstname <<'\n';
    std::cout<<babai<<'\n';

    return 0;
}