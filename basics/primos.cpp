// Escriba un algoritmo para imprimir los números primos menores a un valor dado n.
#include <iostream> 
#include <cstdlib> 

int main()
{
    int i,var ={}; 
    long int num; 
    bool flag = true;
    int resg= false; 
    std::cout<<"Ingrese un nro entero para calcular los primos anteriores a el: "; 
    std:: cin>> num; 

    var= 1; 
    i=1; 
    
    std::cout<< "Los numeros primos son"; 
    
    if (num >= 2)
    {
        std:: cout<< " 2 "; 
    }
    
    while (var < num)
    { 
        while (i<num && flag)
            { 
                if (var % i == 0 and (i != 1 and i != var)) 
                {
                    flag= false;
                }
                i=i+1; 
            }
    
        if (flag) 
        { 
            std::cout<<" "<< var << " ";
        } 
        var=var+2;  // cambia la complejidad espacial y temporal, al disminuir el nro de posibles iteraciones del bucle 
        i=1;
        flag = true; 
    } 
    return 0; 
}

         


