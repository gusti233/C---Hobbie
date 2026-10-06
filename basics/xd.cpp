#include <iostream> 
#include <string> 

int main()
{
    // Inicialización uniforme de todas las variables para evitar valores basura
    double longi{}; 
    double metro2{}; 
    int mat{}; 
    int calidad{}; 
    double peso_neto{}; 
    double peso_presto{}; 
    double peso_nucleo{};   

    std::string condicion{}; 

    // Cambiamos a "FIN" en mayúsculas, o puedes evaluar otra condición numérica
    while (condicion != "FIN")
    { 
        std::cout << "Ingrese la longitud de la tela en metros: "; 
        std::cin >> longi; 
        
        std::cout << "Ingrese el peso en kg por metro cuadrado: "; 
        std::cin >> metro2; 

        // CORRECCIÓN 1: Uso de && (AND) para la validación de rango
        while (mat != 1 && mat != 2)
        {
            std::cout << "Ingrese el tipo de material (1. Seda / 2. Algodon): ";  
            std::cin >> mat; 
        } 

        // CORRECCIÓN 1b: Lo mismo para la calidad
        while (calidad != 1 && calidad != 2)
        { 
            std::cout << "Ingrese la calidad del material (1. Primera / 2. Segunda): "; 
            std::cin >> calidad;      
        } 

        peso_neto = longi * metro2; 

        // CORRECCIÓN 2: Uso de '==' para comparación legítima
        if (mat == 1) 
        {
            peso_presto = peso_neto * 0.02;  
        }
        else 
        { 
            peso_presto = peso_neto * 0.07; 
        }

        // CORRECCIÓN 2b: Uso de '==' para la calidad
        if (calidad == 1) 
        { 
            peso_nucleo = 0.400; 
        }
        else 
        {
            peso_nucleo = 0.300; 
        }

        std::cout << "\n--------- PESO CALCULADO ---------\n"; 
        std::cout << "Tipo de material: " << mat << "\n"; 
        std::cout << "Tipo de calidad: " << calidad << "\n"; 
        std::cout << "Peso neto: " << peso_neto << " kg\n"; 
        std::cout << "Peso apresto: " << peso_presto << " kg\n"; 
        std::cout << "Peso nucleo: " << peso_nucleo << " kg\n"; 
        std::cout << "*** PESO TOTAL: " << (peso_neto + peso_presto + peso_nucleo) << " kg ***\n";
        std::cout << "----------------------------------\n";
        
        // CORRECCIÓN 3: Resetear las variables de validación para la siguiente pieza
        mat = 0;
        calidad = 0;

        std::cout << "\nEscriba 'FIN' para salir o cualquier otra palabra para continuar: ";
        std::cin >> condicion; // Usar cin directo es más seguro si solo buscas una palabra sin espacios
    }
    
    return 0;
}