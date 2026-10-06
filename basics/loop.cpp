#include <iostream>
#include <string>
#include <cstdlib> // cada vez que quiera limpiar el terminal, usoe esta libreria 
int main(){
        /* AMBIENTE */
    std::string name{}; 
    bool x{true}; 
    int i{}; 
    /*PROCESO */
    
    while (name.empty()) {  
        if (x) {
            std::cout<< "Introduce ur name: "; 
            std::getline(std::cin, name); 
            x= !x;
        }
           //std::getline(std::cin, name) -> getline permite tomar toda la linea escrita y la transforma a string 
        else  {
            std:: cout<<"***Error name not defined ["<<i<<"]*** \n"; 
            std:: cout<< "Write ur name again: "; 
            std:: getline(std:: cin, name);               
            i++;       
        }

        system("cls"); // para limpiar el terminal
    }

    std::cout<<"*********Welcome "<< name << " ************ \n";
    system("pause"); 
}
