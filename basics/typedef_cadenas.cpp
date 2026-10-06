#include <iostream>

// uso de espacios de nombre, utilidad. Sirve para poder utilziar el mismo nombre identificador de una variable, para diferentes contextos. Mediante el operador de resolucion :: 
/*
namespace primero{
    int x = {1312311};
}

int main()
{
    using std::cout; // traigo el metodo que quiero usar de la libreria std-> standar 

    int x = 12; 
    cout<<"X = "<< primero::x << "\n"; 
    cout<< "X del main = " << x << "\n"; 
    
}


*/ 

typedef std::string cadena; // permite definir algun tipo de dato existente, de otra manera para referirse en el codigo
typedef int entero; 


int main()
{ 
    
    using std::cout;
    using std:: cin;  // traigo el metodo que quiero usar de la libreria std. 
    //using primero::x; //-> traigo la variable x del espacio de nombre <primero>    
    
    entero x; 
    entero bbbb= 12312; 
    cadena texto= "hola como estas, todo bien"; 

    cout<<"X = "<< x <<"\n";
    cout<< "X del main = " << x << "\n"; 
    cout<< bbbb<< "\n";
    cout<< texto << "\n"; 

    
}
