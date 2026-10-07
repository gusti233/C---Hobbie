#include <iostream> 
#include <stdlib.h> 

int main()
{ 
    int dia_nac, mes_nac,anio_nac, dia_a, mes_a, anio_a;  
    std::cout<<"Ingrese su fecha de nacimiento DD/MM/YYYY"; 

    // Fecha de nacimiento
    std:: cout<<"\n Dia: "; std:: cin>>dia_nac; 
    std:: cout<<"\n Mes: "; std:: cin>> mes_nac; 
    std:: cout<<"\n Anio: "; std:: cin>> anio_nac;
    
    std::cout <<"Ingrese la fecha actual DD/MM/YYYY"; 

    //Fecha actual
    std::cout<< "\n Dia actual: "; std::cin>>dia_a; 
    std::cout<< "\n Mes actual: "; std::cin>>mes_a; 
    std::cout<< "\n Anio actual: "; std::cin>>anio_a;   

    int edad= anio_a - anio_nac; 

    if (mes_nac== mes_a)
    { 
        if (dia_nac> dia_a) 
        { 
            edad-=1; 
        }
    }
    else if (mes_nac>mes_a)
    {
        edad-=1; 
    }

    std::   cout<<"Tu edad es: "<< edad; 
    return 0; 
}