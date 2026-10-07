/*
17. Elabore un algoritmo que calcule el producto de dos enteros A y B empleando sólo la operación suma.
*/ 
#include <stdio.h>
#include <iostream> 

int main()
{ 
    int num1, num2, sum {0}; 
    std::cout<<"Ingrese el primer numero entero"; std::cin>>num1; 
    std:: cout<<"Ingrese el segundo numero entero"; std::cin>>num2; 

    
    if (num1<num2)
    { 
        for (size_t i = 0; i < num1; i++)
        {
            sum=sum+num2; 
        }
    } 
    else 
    { 
        for (size_t i = 0; i < num2; i++)
        {
            sum=sum+num1; 
        }
    }


    std::cout<<"El resultado de "<< num1<<" x "<< num2 <<"= "<< sum; 
    return 0; 
}