
/* 1.01.Dada una secuencia de letras del alfabeto que finaliza con una marca '*', contar cuantas letras "A" hay en la
secuencia. 
*/

#include <iostream> 
#include <stdlib.h> 
#include <string> 
#include <cctype> 

int main()
{ 
    int letras_a={0}; 
    std:: string texto; 
    
    //Cadena de entrada
    std::cout<<"Ingrese la cadena de caracteres deseada: \n"; std:: getline(std::cin, texto); 

    //std::getline(std::cin >> std::ws, texto); para borrar los espacios en blancos extras entre el string
    std::cout<<"Cadena de texto: "<< texto; 


    std:: cout<<"Caracteres leidos: \n ";

    for (char x: texto) 
    { 
        std::cout << '_' << x; // si o si debo imprimir algo antes del char x, porque sino se muestra en blanco
        
        if (toupper(x) == 'A')
        {
            letras_a++; 
        }
    
    }

    std::cout<<"\n Cantidad de letras A encontradas: "<< letras_a; 
    return 0; 

}

/*

#include <iostream>
#include <string>

int main() {
    std::string frase = "Chinchulines al ajo";

    // "Por cada caracter 'c' dentro de 'frase'..."
    for (char c : frase) 
    {
        std::cout << c << "-";
    }
    // Salida: C-h-i-n-c-h-u-l-i-n-e-s- -a-l- -a-j-o-
    
    return 0;
}
    */