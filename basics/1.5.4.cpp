/* /* 
Ejercicio 1.1.5.4¶
Se desea calcular la superficie de un trapecio, para la cual se ingresa la longitud de ambas bases y la altura. En base a la fórmula:

    S= ((Bmay +Bmen) x h) / 2 

Finalizando el proceso, emitir dicha superficie y los valores ingresados.


#include <iostream>
#include <cmath> 
#include <cstdlib> 


int main()
{
    float bmay, bmin,h,superficie = {}; // inician en 0 

    std:: cout<< "Welcome... "; 
    system("pause"); 
    std:: cout<<"Ingrese la long. de las bases \n"; 
    
    std:: cout<< "Bmin: "; 
    std:: cin>>bmin; 
    
    system("cls");  
    
    std:: cout<< "Bmay: "; 
    std:: cin>> bmay; 

    std:: cout<<"Ingrese la altura del trapecio: "; 
    std:: cin>> h; 

    system("cls");
    
    superficie = ((bmay + bmin)* h)/ 2 ; 
    std::cout<<"La superficie del trapecio de: \n"<< "Lado Bmin: "<< bmin<< "\n Bmay: "<< bmay << "\n Altura: "<< h << "\n es:"<< superficie;   

    
}






Ejercicio 1.34¶
Escribir un algoritmo que permita imprimir la siguiente sucesión. Considere que N es un número par, que se ingresa.


    2   4   6   ............    N
    2   4   6   ........    N-2
    2   4   6   ...     N-4
    ...........
    2   4   6   
    2   4   
    2   


#include <iostream> 
#include <cstdlib> 
int main()
{
    int res,par,b= {3};
    b=0; 
    //bool flag={true};

    while ((par % 2) != 0 ){ 
        std:: cout<< "Ingrese un numero par"; 
        std:: cin >> par; 
       // system("pause"); 
    }
    
    res=par; 

    //for (int i = 0; i <= par/2; i++)

     
    {
        std:: cout<< "linea: "<< i << "="; 
        
        while (b<= res) 
        {
         std::cout<< " "<< b << " "; 
         b+=2; 
        }
        b=0; // reinicio a 0, para la isguiente fila 
        res-=2;  // decremento el res;   
        std:: cout<<std::endl; 
    }   

}



Una fábrica textil produce telas de dos calidades distintas (primera y segunda) y de dos materiales distintos (seda y algodón). 
Generar un algoritmo que calcule el peso de varias piezas de tela, el cual está dado por la suma del peso neto, más un porcentaje por el apresto, 
más el peso del núcleo de cartón. Para realizar el cálculo, tener en cuenta la siguiente información, para cada pieza:

El peso del m2 y la longitud de cada pieza.
Al peso neto de la tela hay que sumarle un porcentaje por cada pieza, debido al apresto, el cual es del 2% para las telas de seda y del 7% para las de algodón.
También se debe considerar el núcleo de cartón, que es de 400 gr. para los rollos de telas de primera y de 300 gr. en los de segunda.
Finalizar cuando la variable FIN sea igual a 'SI'.


peso = peso neto + peso apresto + peso carton 



*/
#include <iostream> 
#include <string> 
#include <cstdlib> 
#include <cmath> 

int main()
{
    /*AMBIENTE */

    std::string fin= {"NO"}; 
    double longi, metro2= {}; 
    int mat, calidad; 
    double peso_neto, peso_presto, peso_nucleo = {};   
    
    while (fin != "SI")
    { 

        std:: cout<<"Ingrese la longitud de la tela en metros: "; 
        std:: cin>> longi; 
        
        std::cout<< "Ingrese el peso en kg, por metro cuadrado: "; 
        std:: cin>> metro2; 
        /*
        std:: cout<<"Ingrese el tipo de material con un digito entero 1. (tela) 2. (algodon): ";  
        std:: cin >> mat; 

        std::cout<< "Ingrese la calidad del material con un digito entero 1. P (primera) 2. S (segunda): "; 
        std::cin>> calidad;    
        */
        while (mat != 1 && mat!=2)
        {
            std:: cout<<"Ingrese el tipo de material con un digito entero 1. (tela) 2. (algodon): ";  
            std:: cin >> mat; 
        } 

        while (calidad != 1 && calidad != 2)
        { 
            std::cout<< "Ingrese la calidad del material con un digito entero 1. P (primera) 2. S (segunda): "; 
            std::cin>> calidad;      
        } 
        
        // inicalizo la variable peso total 
        peso_neto = longi * metro2; 

        if (mat = 1) 
        {
            peso_presto =peso_neto*0.02;  // le sumo el presto de la tela ; 
        }
        else 
        { 
            peso_presto =peso_neto*0.07; // le aplico el apresto del algodon
        }

        
        if (calidad = 1) 
        { 
            peso_nucleo= 0.400; 
        
        }
        else 
        {
            peso_nucleo= 0.300; 

        }
        std:: cout<<"---------PESO CALCULADO------- \n"; 
        std:: cout<< "Tipo de material: "<< mat << "\n"; 
        std:: cout<< "Tipo de calidad: " << calidad << "\n"; 
        std:: cout<< "Peso neto: " << peso_neto << "\n"; 
        std:: cout<< "Peso apresto: " << peso_presto << "\n"; 
        std:: cout<< "Peso nucleo: " << peso_nucleo << "\n"; 
        std:: cout<< "***PESO TOTAL: "<< peso_neto+peso_presto+peso_nucleo << "*** \n";
        
        mat= 0; 
        calidad= 0; 

        std:: cout<< "Desea NO seguir realizando calculos 1. SI 2. NO : "; 
        std:: cin>> fin; // toma toda la linea
        
            // Asegurarnos que evalue el while en uppercase 
        if (fin == "si" || fin == "Si") 
        { 
            fin = "SI"; 
        }
        
    }    
    return 0; 
}