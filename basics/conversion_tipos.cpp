#include <iostream> 

void print(double value)
{
    std:: cout<<"llamada a print()"; 
    std:: cout<< "variable impresa: "<< value; 
}

int main(){ 
    double x= 22; // -> entero 
    double b= 2000e-2; // notacion cientifica: 200e-4 = 200x10**-4 
    print(b); 
    print(double(x/ 3.0)); // -> con decimal 
    
    // conversion de notacion cientifica
    x=34.50; 
    x= 3.450e1; 
    print(x);

    x= 0.004000;
    x= 4.000e-3; 
    print(x);

    x= 123.005; 
    
}   
/*
Start with: 42030 (no information to suggest the trailing zero is significant)
Slide decimal point left 4 spaces: 4.2030e4
No leading zeros to trim: 4.2030e4
Trim trailing zeros: 4.203e4 (4 significant digits)
*/ 