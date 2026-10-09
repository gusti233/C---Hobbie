#include <iostream> 
#include <stdlib.h> 
#include <string> 
#include <cctype> 

/* 

1.06. Dada una secuencia de numeros enteros del tipo string, trnasformar a numerico y realizar la suma acumulada de todos ellos

*/
int main()

{
    std::string car={}; // para encadenar el nro entero 

    int i={0}; // indice para recorrer cada caracter del string
    int cont=0;  // acumulador para la suma de enteros
    int tam=0; // almacenar tamano de la secuencia 

    int valor_ascii; 
    std:: string numeros = {""}; 
    std::cout<<"Ingrese la secuencia de numeros enteros: \n "; 
    std::getline(std::cin>>std::ws, numeros); 

    std::cout<<"\n secuencia ingresada:  "<< numeros; 

    std::cout<<"\n tamano de la secuencia: "<< int(static_cast<int>(numeros.length())) << std::endl; 
    
    tam= static_cast<int>(numeros.length());  

    while (i< tam)
    { 
        // valor_ascii= static_cast<int>(numeros[i]);
        
        // comparo el valor numerico solamente en ascii decimal, para reducir el espacio de busqueda, si no se encuentra entre esos valores simplemente pasa al siguiente bucle
        while (static_cast<int>(numeros[i])>= 48 && static_cast<int>(numeros[i]<=57) && i<tam) 
        { 
            std::cout<<"\n ["<< i <<"]"<< "caracter leido: " << numeros[i] << "\n";  
            car= car+numeros[i]; 
            i++; 
        } // recojo el primer substring de entero 

        //sumo los enteros     
        
        cont= cont+ std::stoi(car);  // stoi trnasforma el entero string a entero tipo numerico, no lo trnasforma a su valor referencial ascii; 

        std::cout<<"\n \n  Suma actual: "<< cont; 
 

        while ((static_cast<int>(numeros[i])<48 || static_cast<int>(numeros[i]>57)) && i<tam)
        { 
            i++;
        }
        car=" "; 
    } 
    std::cout<<"\n \n \n Resultado de la suma acumulada: "<< cont; 

    std::cout<<"\n \n fin sec"; 

return 0; 
}
