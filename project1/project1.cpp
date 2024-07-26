#include <iostream>

int main(){

    int x ;     //declaration
    x = 5;      //assignment

    int x1 = 5;
    int y = 6;

    int sum = x + y;
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

   //integer (whole number)
    int age = 60;
    int year = 2020;
    int week = 3;
    int days = 7.5;

    //double (numbers including decimal)
    double price = 10.99;
    double gpa = 10.99;
    double temp = 24.7;
    double amount = 67.96;

    std::cout << price << '\n';

    //single character
    char grade = 'A';
    char initial = 'BC';

    std::cout << grade << '\n';
    std::cout << initial <<'\n';

    //boolean (true / false)
    bool student = false ;
    bool power = true;
    bool forsale = true;

    //string (object that represents a sequence of thext)
    std::string name = "Bro";
    std::string food = "pizza";
    std::string day = "friday";
    std::string address = "123 fake St.";

    std::cout<< name <<'\n';
    std::cout<< address <<'\n';

    std::cout<< "HELLOOOOOOO " << name <<'\n';

    const double pi = 3.15 ;

    std::cout<< pi <<'\n';

    



    return 0;
}