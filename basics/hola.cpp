#include <iostream>  

using namespace std; // --> if we use this syntax, we dont need to write the syntax " std:: '
int main()  {
    //ambiente -> single line comment 
    int var; 
    
    /* -> this is a multiple-line comment
    std::cout<<"introduce a number that you want to print"<< std::endl; // cout imprime el contenido por pantalla, mientras que endl realiza un salto de linea 
    std::cin>>var; // resguardo el nro ingresado en la variable var 
    std::cout<<"The number is "<< var << " y el siguiente tambien es: " <<std::endl;  // imprime por pantalla la variable 
    std::cout<< var;
    */ 
   
    cout<<"introduce a number that you want to print"<< endl; // when we use the syntaxx 'endl' this means that a jump space on the screen`s line 
    cin>>var; // resguardo el nro ingresado en la variable var 
    cout<<"The number is "<< var << " y el siguiente tambien es: "; // imprime por pantalla la variable ";
    cout<< var <<endl;  //
    cout<<"hola"; 
    return 0;
}
// if we dont try to use "using namespace std;", we need to write std:: every time that we want to print something on the screen or read something in that same way 

// error example : prog.cc:5:31: error: expected ';' after expression, 5-> line - 31-> char 

// if we use "hola" -> we refer a string 
// if we use 'h'-> we're refering a character 
