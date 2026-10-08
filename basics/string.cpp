#include <iostream>
#include <string>

int main(){
    std::string name; 
    
    std::cout<< "Introduce ur name: "; 
    std::getline(std::cin, name); 
    //std::getline(std::cin, name) -> getline permite tomar toda la linea escrita y la transforma a string 
    char xd{}; 

    if (name.length() >= 10) { 
       std::cout<<"Error your size's name is too much"; 
       xd=name.at(1); 
       std::cout<< xd; 
    }
    else if (name.length() <=10) { 
        std::cout <<"Welcome"; 
    } 
    else 
        std::cout<< "****Welcome to the website**** \n "<< name;  
    
}

/* 
funciones de string 


name.clear() -> borra el string almacenado 

name.append("@hotmail.com") --> "tomas" + "@hotmail.com" -> tomas@hotmail.com. append es para adjuntar caracteres o strings 

name.at(n) --> te da el caracter de la posicion n del string

name.insert(n, "x") --> agrega el caracter en la posicion n, y mueve el resto del string, una posicion adelante 
example name = "Tomas" --> name.insert(2,"x") --> name= "Toxmas" 

name.erase(i,m) --> permite eliminar cierto numero de caracter del string, siendo siempre i<=m. 
name.find("char") --> te da la posicion en la que encuentra el primer caracter deseado. 


*/