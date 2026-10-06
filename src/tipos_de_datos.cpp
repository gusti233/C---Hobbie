#include <iostream> 

using namespace std; 

int main(){
    int num; // int referencia a un nro entero; 1,2,3,4,5,6,. etc. 
    char letra; // char referencia a un caracter o string de 1 solo digito, ; a, b, c, d, e, f, $, g, etc... 
    int num1, num2; // to refer that num1, and num2 are integer variables. 
    double a; // double referencia a un nro 
    char valuer {'Y'}; 
    int b {4}; /* permite inicialziar una variable b de tipo entero, con el valor b=5, los corchetes permiten indicar que restrictivamente se debe inicializar un nro entero, si 
    intentamos colocar un 4.5 tirara error */
    
    int z {}; // inicializar con valor entero vacio, z= 0 
    /*[[maybe_unused]] double pi { 3.14159 };  /*la syntax maybe_unused permite definir que si una variable inicializada no es referenciada en ningun segmento del codigo, 
    al compilar el programa, no generara error*/
    b=4.7; // se redondea a 4. 
    cout<<"el nro es "<< b<< endl; 
    num1= 2; 
    int aux=b+num1; 
    cout<< "suma entre "<< b <<"+"<< num1<< " es: "<< aux << endl; 
    cout<<"el nro es "<< z; 
     

    while (valuer == 'Y')
    {
        cout<<"Ingrese la letra N para cerrar el programa \n ";
        cin>> valuer;
        
    }
    
    
    return 0; 
}

