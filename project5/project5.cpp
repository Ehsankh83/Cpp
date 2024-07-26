#include <iostream>
#include <cmath>
int main(){

    double x = 3;
    double y = 4;
    double z ;
    
    z = std::max(x,y);
    z = std::min(x,y);
    //if u wanna use more math funtions we have to add #include <cmath> :)

    z = pow(x,y);
    z = sqrt(9);
    z = abs(-3);
    z = round(3.8); //if the number is closser to the next number it will round up, if not it will round down 
    z = ceil(3.8);//always rounds up 
    z = floor(3.8);//always round down
    
    std::cout<<z;

    return 0 ;
}