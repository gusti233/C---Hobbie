#include <iostream> 
#include <cctype> 
//#include <cstdlib> 
//#include <cmath> 


/*
int main()
{
    std:: string cadena={"aaaa a a a a aaaaa aaaa aa aaa a aaA-aaa-AA-aaaA-a-FFFAFAFAafafF* "}; // 16 a  
    char v={' '}; // extraer el caracter actual 
    int i={0}; // contador para avanzar el string 
    int cont={0}; 
    //std:: cout<< "Ingrese su nombre y apellido : "; 
    //std:: getline(std:: cin >> std::ws, name); // std::ws, se utiliza para ignorar los espacios en blanco iniciales 

    std::cout<<"Cadena actual leida: "<< "\n"; 

    while (v != '*') 
    { 
        v= cadena[i]; // toma el caracter de la cadena en la posicion actual es decir i 
     
        std::cout<< v;  
       
        if (v == 'A' || v== 'a')
        { 
            cont++; 
        }
        i++; 
    }
    std:: cout<< "\n Cantidad de A's encontradas: " << cont; 
    return 0; 
}

// Dada una secuencia de letras del alfabeto que finaliza con la letra "Z", contar cuantas consonantes hay en la secuencia.

int main() { 
    
    std:: string cadena={"$%#$^%^*&%^*!#!@#!@#!^#$^#$^#$asssaa////---mAtEmAtIcAsYpRoGrAmAcIoNZ"}; // 15 consonantes 
    const std::string vocal="AEIOU"; 
    char v=' '; 
    int cont, i; 
    std::cout<<"Cadena de caracteres leida:\n"; 
    
    cont=0; 
    i=0; 

    while (i< int(cadena.length())) // idem a convertir la variable ocn static_cast<int>(*variable*)
    {
        v= cadena[i]; 
        std:: cout<<v; 
        
        while (int(v) < 65 || int(v)>122 || (int(v)>=91 && int(v)<=96) )   // utilizo los rangos de la tabla ascii 
        { 
            std:: cout<<v; 
            i++; 
            v=cadena[i]; 
        }
        switch (toupper(v)) {
            case 'A': break; 
            case 'E': break; 
            case 'O' : break; 
            case 'I': break; 
            case 'U': break;        
        default: cont++; 
        }
        i++; 
    }
    std::cout<<"\n Cantidad de consonantes: "<< cont; 
    

}
 

 dispone de una secuencia de caracteres y se desea obtener una secuencia de salida 
que resulte de copiar la secuencia de entrada, descartando el caracter "$".

#include <iostream> 
#include <cctype> 
#include <cstdlib> 

int main() 
{ 
    AMBIENTE

    std:: string entrada = {"C$O$D$$I$G$O$$C$P$P*"}; // secuencia d entrada 
    std:: string salida={""};  // secuencia de salida 
    char v =' '; 
    int i = 0; // contador 

    std::cout << "entrada procesada: "<< entrada << "\n";
    std::cout<<"****Salida obtemida**** \n" << salida;  

    while (i< int(entrada.length()) ) 
    {
        v= entrada[i]; 
        //std::cout<< v; 
        while (v == '$') {
            i++;
            v=entrada[i];  
        }
        salida= salida + v; 
        std:: cout << v; 
        i++; 
    }

    return 0; 
}



// 

//std::string secuencia_texto{ "Ingenieria en sistemas de Informacion implica innovacion y disciplina*" }; 
#include <iostream> 
#include <cstdlib> 
#include <cctype> 

int main() 
{ 
    std::string secuencia_texto{ "i i i iasdasdasd iiiiii asdaa                Ingenieria en sistemas de Informacion implica innovacion y disciplina y como se encuentra el ingeniero Iberio*" };
    char v=' '; 
    int i, pali= {};     
    i=0 ;
    pali=0;
    v=secuencia_texto[i]; 
    
    while (i< int(secuencia_texto.length()) ) 
    { 
        if (v =='i' || v== 'I')
        { 
            pali++; 
        }
       
        i++; 
        v= secuencia_texto[i]; 

        while (v != ' ')
        { 
            i++; 
            v=secuencia_texto[i]; 
        } 

        while (v == ' ')
        { 
            i++; 
            v=secuencia_texto[i]; 
        }

    }
    
    std:: cout<<"***words with initial I***: "<< pali; 






}


//Ejercicio 2.1.10¶
//Se dispone de una secuencia de caracteres. Se desea permita contar la cantidad de palabras que comienzan con una letra dada.
#include <cstdlib> 
#include <iostream> 
int main()
{
    std:: string entrada= {""};
    int i, cantidad=0; 
    char v= ' ';  
    char letter =' ';
    
    
    i=0; 
    
    std:: cout<< "Introduce a letter to count the number of word with the specific letter "; 
    std:: cin>> letter;   
    
    std:: cout<< "Introduce the sequent of chars"; 
    std:: getline(std::cin>>std::ws, entrada); 

    v=entrada[i]; // inicializo secuencia 
    
    while ( i< int(entrada.length()) )
    { 
        if (toupper(v)== toupper(letter) )
        { 
            cantidad++; 
        } 
        i++; 
        v= entrada[i]; 
        
        while (v != ' ') 
        {
            i++; 
            v= entrada[i]; 
        }

        while (v == ' ')
        { 
            i++; 
            v= entrada[i]; 
        }
    }
    std:: cout<< "****Secuencia procesada con exito**** \n \n ";
  
    system("pause");  
    system("cls"); 

    std:: cout<< "Palabras con inicial "<< letter << " = "<< cantidad;  
    

    return 0; 
} 

//Ejercicio 2.1.11¶
//Dada una secuencia de caracteres, determinar la cantidad de palabras de 4 caracteres (letras)

int main(){ 
    
    std:: string entrada={};
    char v=' '; 
    int i, pal, count; 
    i=0; 
    pal=0; 
    count=0;
    std:: cout<< "Introduce a sequence of char"; 
    std:: getline(std::cin>>std::ws, entrada); 

    v= entrada[i]; 

    while (i< static_cast<int>(entrada.length())) 
    { 

        while (v !=' ' and v != '.' and v != ',') { 
            count++; 
            i++; 
            v= entrada[i];
        }

        if (count == 4)
        {
            pal++; 
        }
        count=0;

        while (v==' ' || v== '.' || v== ',') { 
            i++; 
            v= entrada[i];
        }
    }
    std:: cout<<"words of lenght 4: " << pal; 

    return 0 ;



}
//Se dispone de una secuencia de caracteres. Se desea listar las palabras que comiencen con "ALG".

#include <iostream> 
#include <cstdlib> 
int main()
{
    // AMBIENTE 
    std:: string sec= "algo se sisentneeetetnetnenten raro porque alguien,,,, como que ,.,... ,,,alguien no quiere escuchar alg  ";  
    char v= ' ';  
    int i, pal; 
    // 


    i= 0;  
    pal= 0; 

    v= sec[i]; 

    std:: cout<< "******PROCESANDO SECUENCIA******* \n \n "; 

    system("pause"); 

    while ( i < static_cast<int>(sec.length()) ) 
    { 
        if (toupper(v) == 'A') 
        {
            i++; 
            v= sec[i]; 
            if (toupper(v) == 'L') 
            {
                i++; 
                v=sec[i]; 
                if (toupper(v) == 'G')
                {
                    pal++; 
                }
            }
        }
        // me paro en A, L o G

        while (v != ' ' && v!= ',' && v != '.' ) 
        { 
            i++; 
            v= sec[i]; 
        } // avanzo hasta los whitespaces 

        while (v == ' ' || v== ',' || v== '.') 
        {
            i++; 
            v= sec[i]; 

        } 
    }
    system("cls"); 

    std:: cout<< "  Secuencia de entrada: \n\n"<< sec; 
    std:: cout<< " \n\n Cantidad de palabras con inicial ALG: " << pal; 


    return 0; 
}
*/
//Se dispone de una secuencia de caracteres y se desea saber la cantidad de caracteres (incluidos los espacios)
//que existen entre una coma y la siguiente. Se debe considerar que puede haber más de un par de comas, y que las subsecuencias inicial 
//y final deben descartarse por no cumplir la 
//condición enunciada. Supóngase que las comas son siempre contiguas al último caracter de la palabra.


//Se dispone de una secuencia de caracteres
//y se desea saber la cantidad de caracteres (incluidos los espacios) que existen entre una coma
// y la siguiente. Se debe considerar que puede haber más de un par de comas, y
// que las subsecuencias inicial y final deben descartarse por no cumplir la condición enunciada. Supóngase que las comas son siempre contiguas al último caracter de la palabra.

int main(){
    
    std:: string sec= "hola como estas, todo bien y vos. Eso se puede considerar como una secuencia de prueba, para otro escenario,,,,, en lo posible. "; 
    char v= {}; 
    bool flag; 
    int i, sub, cont; 
    bool subs; 

    subs=false; 
    i=0; 
    cont= 0;
    sub=0; 
    
    v= sec[i];


    while (i < static_cast<int>(sec.length()))
    {   
        while (v !=',')
        { 
            i++; 
            v=sec[i];
        }
        if (v== ',' && subs == false) // fuera de la secuencia 
        {
            sub++; 
            subs= true;
        } 
        else if (v==',' && subs== true) 
        { 
            std::cout<<
        }
        
        std:: cout<< "Cantidad de caracteres de la subsecuencia [" << sub <<"] es: "<< cont;
        cont = 0; 


    }
    return 0;
    


}