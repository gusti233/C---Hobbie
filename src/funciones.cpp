#include <iostream> 

using namespace std; 


void imprimir() // no retorna valores, es como un procedimiento
{
    cout<< "IN imprimir() \n "; 
    int x, b; 
    cout << "suma de x y b es ";
    b=5; 
    x=5;
    x=x+b;
    cout<<x; 
    cout<< "\n OUT imprimir()"; 
}
/*
    int holamundo(int a, int b)  // funciones que retornan valores 
    {
        int x; 
        x = a+b; 
        return x ; 
        
    }
    */

int sumar_enteros(int a, int b)
{
    int x ; 
    cout<< "\n estoy en el metodo sumar_enteros()"; 
    x= a+b; 
    cout<< "\n salgo del metodo sumar_enteros retornando x = a+b"; 
    return x; 

}

int main() // la definicion de funciones no se pueden anidar, void no resguarda el valor de x luego en el main, se trata como variable local 
{
    int x; 
    //cout<< "La suma de 5+4 es "<< holamundo(5,4)<< "\n"; 
    imprimir();
    x=sumar_enteros(6,2);
    cout<< "\n el resultaod es: "<< x ;
    return 0 ; 
}
