#ifndef SOME_UNIQUE_NAME_HERE // -> header guard
#define SOME_UNIQUE_NAME_HERE

/* for example 
    #ifndef DIVIDIR.HH 
    #define DIVIDIR.HH
    int divide(int a, int b)
     {
        int x 
        x= a / b 
        return x 
     }
    
     #endif 

     .....the goal of header guards is to prevent a code file from receiving more than one copy of a guarded header. 
            By design, header guards do not prevent a given header file from being included (once) into separate code files. This can also cause unexpected problems. Conside


     Supon que esta seccion es tu main(), que es otro archivo.cpp 
     #include <iostream> 
     #include "dividir.hh" -> trae el codigo del archivo "nombre.hh", el cual queres exportar al main 

     int main()
     {
        int w ;
        w= dividir(5,2);
        cout<< "el resultado del a division es "<< w; 
     
     }



*/
//your declarations (and certain types of definitions) here

#endif
/* 
Los headers se utilizan cuando quieres crear librerias con funciones o voids para utilizar en el main() de tu proyecto

*/
