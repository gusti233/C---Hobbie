/* Estos temas se tocan en la seccion 3.5 de learncpp.com 
    Una forma de detectar errores es utilizando prints para mostrar la informacion de que metodos son llamados por pantalla 

    #include <iostream>

        int getValue()
        {
        std::cerr << "getValue() called\n";
            return 4;
        }

        int main()
        {
        std::cerr << "main() called\n";
            std::cout << getValue() << '\n';

            return 0;
        }   
            
*/ 

// Luego otra forma de detectar errores es utilizar las cabeceras, para activar o desactivar instrucciones de depuracion 

#include <iostream>

#define ENABLE_DEBUG // usa comentarios para desactivar la depuracion 

int getUserInput()
{
#ifdef ENABLE_DEBUG // => si colocas comentarios "//" en la linea 25, se desactivara el segmento definido "ENABLE_BUG" cualquiera sea la parte donde se mencione.
std::cerr << "getUserInput() called\n";
#endif
	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;
	return x;
}

int main()
{
#ifdef ENABLE_DEBUG
std::cerr << "main() called\n";
#endif
    int x{ getUserInput() };
    std::cout << "You entered: " << x << '\n';

    return 0;
}