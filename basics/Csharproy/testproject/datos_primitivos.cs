using System.Collections.Specialized;
using System.Runtime.InteropServices;

class holaMundo
{
    static void Main(string[] args)
    {
        // comentarios 
        /* otra forma de comentar varias lineas a la vez */         

        Console.WriteLine("hola mundo"); 
       
       /* variable tipo byte, se utiliza cuando necesitas almacenar pequenos valores enteros sin signo o cdo se trabaja con digitis binarios como en el caso de manipulacion 
        de archivos o transmision de datos de redes 
        Tamano max: 0 a 255*/  
        byte mibyte = 0; 
        Console.WriteLine("variable tipo byte", mibyte); 
        
        /* variable tipo sbyte, se utiliza cuando necesitas almacenar valores pequenos que puedan tener signo positivo o negativo */ 
        sbyte mibyte2= -5;  
        Console.WriteLine("variable tipo sbyte", mibyte2);    

        /* variable tipo short, se utiliza cuando necesitas numeros enteros que pueden ser positivos o negativos pero requieren un amplio rango de int. 
        -32.768 a 32.767*/ 
        short var2 = 20200; 
        Console.WriteLine("variable tipo short", var2); 

        /*variable tipo ushort, se utiliza cdo necesitas almacenar nros no negativos que superan el rango de tipo byte, pero sin requerir el tamano de un int. 
        Es util en el caso de contadores, o manejo de tamano de datos, donde la varaible nunca sera negativa */ 

        ushort var3 = 2112; 
        Console.WriteLine(var3); 

        /* variable tipo int, es adecuado para la mayoria de operaciones aritmeticas */ 
        int miInt= 1222222; 
        Console.WriteLine(miInt); 

        /* variable tipo entero amplio, es adecuado para almacenar valores enteros mucho mayores que int. Util en aplicaciones que manejan grandes cantidades de datos. */ 
        long  milargo= 12312; 
        Console.WriteLine(milargo); 

        /* variable tipo float, ocupa 4 bytes (32 bits) de memoria. Tiene una precision de 6 a 9 dig decimales */ 
        float mifloat= 0.12312f; 
        Console.WriteLine(mifloat); 

        /* variable tipo double, ocupa 8 bytes (64 bits) de memoria, ideal para calculos cientifios y de ingenieria*/ 
        double midouble= 0.232; 
        Console.WriteLine(midouble); 

        /* variabie tipo decimal, se utiliza para calculos cientificos. ocupa 16 bytes (128 bits), tiene una precision de hasta 28 o 29 dig decimales significativos. Se debe 
        agregar un sufijo m o M al numero, para declararlo decimal o por defecto sera un double*/
        decimal midecimal = 0.141241241241244241241m;
        Console.WriteLine(midecimal); 

        /* variable tipo bool*/ 
        bool miboola= true; 

        /* variable tipo char*/ 
        char michar= 'U'; 

        int xd = 123; 
        Console.WriteLine(michar);   
        Console.ReadLine(); 

        /* variable tipo string
        -  Es inmutable -> no se puede modificar una vez creada, cualquier cambio genera una nueva cadena. 
        -   Anque es un tipo de referencia, se usa como un tipo primitivo. 
        - Acceso por indice -> puedes acceder a cualquier caraacter de la cadena utilizando indices. 
        - OPERACIONES COMUNES: 
            -> Concatenacion: concatenacion = mistring + "otro string".   o interpolacion ($ "Hola {nombre}") 
            -> Accede a longitud: texto.length(). 
            -> Mayus o minuscula: texto.toUpper(), texto.toLower(); 
            -> Busqueda: texto.Contains("palabra") o texto.IndexOf("a"); 
            -> Division: texto.Split(''); */ 
        string micadena = "hola mundo como estas"; 
        Console.WriteLine($"string {micadena}");



        /* Variable tipo objeto, cualquier tipo en c# puede ser tratado como objeto. 
        Los tipos int, bool, etc, pueden ser convertidos en objetos a traves de boxing (se envuelven en un objeto)
        Unboxing convierte denuevo a su tipo original. 
        Metodos comunes: 
        -   Tostring(): devuelve una representacion en cadena del objeto.
        -   Equals(): compara si dos objetos son iguales. 
        -   GetHashCode(): devuelve el codigo hash del objeto. 
        -   GetType(): obtiene el tipo en tiempo de ejecucion. */ 

        object miobject = 20; 
        object miobject1 = "CADENA"; 


    }
}

