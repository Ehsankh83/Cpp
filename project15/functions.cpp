#include <iostream>

//functions are a block of reusable codes

void happybirthday(std::string name , int age);

int main(){
    int age =19;
    std::string name = "Eh" ;

    happybirthday(name, age );

    return 0 ;
}

void happybirthday(std::string name , int age){
    std::cout<<"happy birth day to you ! "<<'\n';
    std::cout<<"happy birth day to you ! "<<'\n';
    std::cout<<"happy birth day to you dear "<< name << " !"<<'\n';
    std::cout<<"happy birth day to you ! "<<'\n';
    std::cout<<"you are now "<< age << " years old !"<<'\n';
}
