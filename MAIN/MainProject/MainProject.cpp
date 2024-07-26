#include <iostream>


int main(){

    int i;
    int j;
    int choice;
    int typ;
    int stop = 0;
    int merch[3][5];


    do{
        std::cout<< "*********************************"<<'\n';
        std::cout<< "*****welcome to our program******"<<'\n';
        std::cout<< "*********************************"<<'\n';
        std::cout<< "1. Add merch"<<'\n';
        std::cout<< "2. Change merch data"<<'\n';
        std::cout<< "3. Exit"<<'\n';
        std::cout<< "Enter your choice :";
        std::cin >> choice;

        switch(choice){
            case 1:    for(i=0; i<5; i++){
                            if(stop == 2){
                                break;
                            }

                            for(j=0; j<3; j++){
                                if(j==0){

                                    std::cout<<"please Enter code of the merch number " << i+1 <<" :" <<'\n';
                                    std::cin>>merch[i][j];

                                }

                                else if(j==1){
                                    std::cout<<"please Enter amount of the merch number " <<i+1 <<" :"<<'\n';
                                    std::cin>>merch[i][j];
                                }

                                else if(j==2){
                                    std::cout<<"please Enter prise of the merch number "<< i+1 << " :"<<'\n';
                                    std::cin>>merch[i][j];
                                }
                            }

                            std::cout<<"Do you wish to add more ? : "<<'\n';
                            std::cout<<"Type 1 for Yes . "<<'\n';
                            std::cout<<"Type 2 for No . "<<'\n';
                            std::cin>> stop;
                        }
                            
                        std::cout<< "that's all the stuff you've added : "<<'\n';
                            
                        for(i=0; i<5 ; i++){
                            for(j=0; j<3 ; j++){
                                
                                std::cout<< merch[i][j] << " ";

                            }
                            std::cout<< '\n';
                        }
                        break; 

            case 2 :std::cout<<"if u want to change price typ #1 ."<<'\n';
                    std::cout<<"if u want to change amount typ #2"<<'\n';
                    std::cout<<"if u want to change merch code typ #3 "<<'\n';
                    std::cout<<"if u want to back typ #4 "<<'\n';
                    std::cin>>typ;
                    switch(typ){
                        case 1:
                        case 2:
                        case 3:
                        case 4: break;
                    }
            case 3: std::cout<< "Thanks for visiting ! \n";
                    break;
            default: std::cout<< "Invalid choice \n";
                    break;
        }

    }while(choice != 3);




    return 0 ;
}