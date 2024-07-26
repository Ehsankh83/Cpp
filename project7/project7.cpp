#include <iostream>

int main(){

    int z;
    std::string name;

    std::cout<< "Enter your name : " << '\n';
    std::getline(std::cin , name);

    //name.length() method shows how many characters ur string has
    z = name.length();
    std::cout<<"your name has " << z << " characters !" << '\n';

    //name.empty() is a boolean method if the string is empty it will be true 
    if(name.empty()){ 
        std::cout<<"please enter your name !";
    } 

    //name.clear() method clears the name . we dont have a name anymore
    name.clear();
    std::cout<<name;

    std::cout<< "Enter your name again : " << '\n';
    std::getline(std::cin , name);
    
    //with name.append() we can add a string at the end of another string
    name.append("@gmail.com");
    std::cout<< name << '\n';

    //with name.at() method u can select a character in a string. 
    std::cout<< name.at(0) << '\n';
    std::cout<< name.at(1) << '\n';
    std::cout<< name.at(5) << '\n';

    //name.insert() method is used for adding a character to a position like this name.insert(position , "character")
    name.insert(0,"$");
    std::cout<< name << '\n';

    //name.find() method gives u the position of the inserted character
    std::cout<< name.find('e') << '\n';
    std::cout<< name.find('j') << '\n';

    //name.erase() method is used to erase characters like this name.erase(beginning , ending) / name.erase(from this character , to this character)
    name.erase(0,3);
    std::cout<< name << '\n';


    return 0 ;
}
