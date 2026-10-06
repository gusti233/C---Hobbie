/* 
Escribir un programa que permita calcular el precio de un artículo para un año dado, considerando que la inflación es del 4 por 100 anual.

La fórmula del precio es: P = C * (1 + R) ^ (N - A)

C - Precio actual.
N - Año futuro.
R - Tasa de Inflación.
A - Año actual.



*/
#include <iostream> 
#include <cstdlib> 
#include <cmath>

int main(){ 
    /*AMBIENTE*/
    float precio_a, tasa_r, precio_final = {}; 
    int ano_f, ano_actual = {};
    
    tasa_r= 0.04; 

    std:: cout<< "*****Bienvenido**** \n"; 
    system("pause"); 
    system("cls"); 
    
    std:: cout<< "Ingrese el precio actual del producto: \n $"; 
    std:: cin>> precio_a; 

    std:: cout<< "Ingrese el ano futuro: \n"; 
    std:: cin>> ano_f;
    
    std:: cout<< "Ingrese el ano actual: \n "; 
    std:: cin>> ano_actual; 

    precio_final= precio_a * pow((1+tasa_r), ano_f- ano_actual); 
    std::cout<<"El precio del producto es: $"<< precio_final; 






}