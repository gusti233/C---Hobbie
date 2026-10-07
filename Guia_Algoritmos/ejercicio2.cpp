//Escriba un algoritmo que acepte dos números, calcule la suma e imprima el mensaje de acuerdo al resultado
//obtenido

#include <iostream> 
#include <stdlib.h>

int main() 
{ 
    int num1,num2 {0}; 
    
    std::cout<<"Ingrese el primer numero"; 
    std::cin>>num1; 

    std::cout<<"Ingrese el segundo numero "; 
    std::cin>>num2;
    
    std::cout<<" "<< num1 <<" + "<< num2<< " = "<< num1+num2; 

return 0; 
}