#include <iostream>

#include "functionalities.h"

int main(){

    float a,b;
    int choice;

    while(1){
           std::cout<<"****Enter Your Option****"<<std::endl;
           std::cout<<"1.Addition"<<std::endl;
           std::cout<<"2.Subraction"<<std::endl;
           std::cout<<"3.Multiplication"<<std::endl;
           std::cout<<"4.Division"<<std::endl;
           std::cout<<"5.Quit"<<std::endl;
           std::cin>>choice;
           if(choice==5){
              break;
        }
           std::cout<<"Enter the 1st Number: ";
           std::cin>>a;
           std::cout<<"Enter the 2nd Number: ";
           std::cin>>b;


        switch (choice)
        {
        case 1:
        
            std::cout<<"Result = "<<addition(a,b)<<std::endl;
            break;

        case 2:
            std::cout<<"Result = "<<subraction(a,b)<<std::endl;
            break;

        case 3:
             std::cout<<"Result = "<<multiplication(a,b)<<std::endl;
             break;

        case 4:
             std::cout<<"Result = "<<division(a,b)<<std::endl;
             break;

        default:
            std::cout<<"Enter the Correct Option"<<std::endl;
            break;
        }
    }
    
}
