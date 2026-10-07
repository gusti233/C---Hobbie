//7. Escriba un algoritmo que permita ingresar 3 valores numéricos y determine cuál es el mayor, el medio y el menor.

// para darle algo de dificultad, decidi hacerlo sin switch ni arreglos, voy simplemente jugando con la variable auxiliar 

#include <iostream>

int main() {
    int num1, num2, num3, aux; 

    std::cout << "Ingresa el primer numero: "; std::cin >> num1; 
    std::cout << "Ingrese el segundo numero: "; std::cin >> num2; 
    std::cout << "Ingrese el tercer numero: "; std::cin >> num3; 

    if (num1<num2)
    { 
        aux=num1; // ahora el mayor es num2
        num1=num2; 
        num2=aux; 
    }

    if (num1<num3)
    { 
        aux=num1; 
        num1=num3;
        num3=num1;      
    }

    if (num2<num3) 
    { 
        aux=num2; 
        num2=num3; 
        num3=num2;
    }

    std::cout<<"Mayor= "<< num1 << "\n Medio = " << num2 << "\n Menor = " << num3; 

    return 0;  
} 