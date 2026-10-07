/* 

14. Escriba un algoritmo que lea el monto total de una compra en un supermercado y determine el total a pagar según
los siguientes criterios:
Si el monto de la compra supera los $ 200.000, se aplica un 15% de descuento.
Luego, se consulta el tipo de entrega (el usuario ingresa el número de opción):
- Opción 1 → retiro en sucursal, no se suma ningún cargo adicional.
- Opción 2 → envío a domicilio dentro de Resistencia, se suma un 5% sobre el monto final.
- Opción 3 → envío a domicilio fuera de Resistencia, se suma un 10% sobre el monto final.

*/ 
#include <iostream> 
#include <stdlib.h> 

int main()
{ 
    int monto, opt, aux;

    std::cout<<"Ingrese un monto: "; 
    std::cin>>monto; 

    if (monto>200000)
    { 
        std::cout<<"Se te aplicara un descuento del 15% sobre tu monto total"; 
        monto=monto*0.85; 
    }

    std::cout<<"\n Elija el tipo de entrega a realizar. Escriba 1, 2 o 3 segun la opt elegida"; 
    std::cout<<"\n Opcion [1]: retiro a sucursal"; 
    std::cout<<"\n Opcion [2]: envio a domicilio dentro de Resistencia"; 
    std::cout<<"\n Opcion[3]: envio  a domicilio fuera de Resistencia"; 
    
    std::cout<< "\n Opcion elegida?: "; std::cin>>opt; 

    switch (opt)
    {
        case 1 :
            std::cout<<"Has elegido retiro a sucursal";
            aux=monto;  
        break;
    
        case 2:
            std::cout<<"Haz elegido envio a domicilio dentro de Resistencia"; 
            std::cout<<"\n Se te cobrara un adicional del 5% sobre el monto final";
            aux=monto+monto*0.05; 
        break;

        case 3: 
            std::cout<<"Haz elegido envio a domicilio fuera de Resistencia"; 
            std::cout<<"\n Se te cobrara un adicional del 10% sobre el monto final"; 
            aux=monto+monto*0.10; 
    }
    std::cout<<"\n Tu monto final es "<< aux; 

    return 0; 
}
