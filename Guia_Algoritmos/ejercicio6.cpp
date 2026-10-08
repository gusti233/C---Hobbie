/* 
Realizar un algoritmo que muestre el cambio en billetes de $100, $50, $20, $10, $5; $2 
y monedas de $1, de un
monto ingresado por teclado. Considere que este monto siempre sera entero.

Ej: ingresa  377 muestra  3 billetes de $100, 1 billete de $50, 1 billete $20, 1 billete $5, 1 billete $2


/* Trabajando unicamente con estructuras condicionales como restriccion*/ 
/* 
#include <iostream> 
#include <stdlib.h>

int main() 
{ 
    int monto, aux1;
    std::cout<<"Ingrese el monto de dinero deseado: "; std::cin>>monto; 


    if (monto >= 100) { 
        aux1= monto / 100; 
        std::cout<<"\n billetes de 100$ requeridos: "<< aux1; 
        monto = monto - aux1*100;
    } 

    if (monto >= 50)
    { 
        aux1= monto/50; 
        std::cout<<"\n billetes de 50$ requeridos: "<< aux1; 
        monto= monto- aux1*50;   
    }
    
    if (monto >= 20) { 
        aux1= monto/20; 
        std:: cout<<"\n billetes de 20$ requeridos: "<< aux1; 
        monto= monto - aux1*20; 
    }
    
    if (monto >=10) { 
        aux1= monto/10; 
        std:: cout<<"\n billetes de 10$ requeridos: "<< aux1; 
        monto= monto - aux1*10; 
    }

    if (monto <10 && monto>=5) {
        aux1= monto/5; 
        std:: cout<<"\n billetes de 5$ requeridos: "<< aux1;  
        monto= monto - aux1*5; ; 
    }
    
    if (monto != 0) { 
        aux1= monto/2;
        std::cout<<"\n billetes de 2$ requeridos: "<< monto; 
        monto = monto - aux1*5; 
    } 

    return 0; 
}
*/

/* Otra alternativa pero considerando otras estructuras de control */

#include <iostream>

int main() 
{ 
    int monto;
    std::cout << "Ingrese el monto de dinero deseado: "; 
    std::cin >> monto; 

    // almacenamos todas las denominaciones en un arreglo ordenado de mayor a menor
    int denominaciones[] = {100, 50, 20, 10, 5, 2, 1};

    // Recorremos cada valor del arreglo
    for (int billete : denominaciones) 
    {
        if (monto >= billete) 
        {
            int cantidad = monto / billete; // Calculamos cuántos billetes necesitamos
            std::cout << "\n Billetes de $" << billete << " requeridos: " << cantidad;
            
            // el operador % (módulo) actualiza el monto dejándonos solo el resto
            monto = monto % billete; 
        }
    }

return 0; 
}