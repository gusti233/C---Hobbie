#include <iostream> 

/* 
if (condition)
    true_statement;
else
    false_statement;




#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int x {};
    std::cin >> x;

    if (x > 0)
        std::cout << "The value is positive\n";
    else if (x < 0)
        std::cout << "The value is negative\n";
    else
        std::cout << "The value is zero\n";

    return 0;
}    
*/
int main (){ 
    /* 
    tambien existen metodos para determinar maximos y minimos entre dos nros, de la libreria estandar 


    double x = 3 ; 
    double y= 1 ; 
    double z {}; 

    z= std::max(x,y) -> z= 3 
    z= std::min(x,y) -> z=1 
    std:: boolalpha; 
    */ 

    int condition {6}; 

    if (condition == 1)
        std:: cout<<"VERDADERO"; 
    else if (condition == 3)
        std:: cout<<"FALSO";      
    else if (condition == 10) 
        std::cout<< "XD"; 
    else
        std:: cout<< "ni FALSO ni VERDADERO"; 

    std::cout<<"\n"; 

    switch(condition) {
        case 10:
            std:: cout<<"Es 10 pa"; 
            break; 
        case 5: 
            std:: cout<< "es 5 pa";
            break;  
        default: 
            std:: cout<< "Ingresa el nro 5 o 10 HDP"; 
            break; 
    } 
    
    if (condition >5 or condition<0) 
        std:: cout<<"\n VERDADERO"; 
    else 
        std:: cout<< "\n FALSO";
    /* 
    operadores 
    or -> || 
    and -> && 
    
     
    */
}