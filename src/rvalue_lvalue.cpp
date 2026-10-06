#include <iostream>
#include <cmath> 

using namespace std; 

void print(int x)
{
    cout<< x << "\n"; 
}

/*
int main()
{
    auto v1 { 12 / 4 }; // int / int => int
    auto v2 { 12.0 / 4 }; // double / int => double

    return 0;
}

Un lvalue (pronunciado “ell-value”, abreviatura de “left value” o “locator value”, y a veces escrito como “l-value”)
 es una expresión que se evalúa como un objeto o función identificable (o campo de bits)


int main()
{
    int x { 5 };
    int y { x }; // y is an lvalue expression int (locator value) y la var "y" guarda la direccion de memoria donde se encuentra x 
    print(y); 
    return 0;
}

 //lvalues come in two subtypes: a modifiable lvalue is an lvalue whose value can be modified.
 //A non-modifiable lvalue is an lvalue whose value can’t be modified (because the lvalue is const or constexpr).

int main()
{
    int x{};
    const double d{};

    int y { x }; // x is a modifiable lvalue expression
    const double e { d }; // d is a non-modifiable lvalue expression
    return 0;
}
int return5()
{
    return 5;
}

int main()
{
    int x{ 5 }; // 5 is an rvalue expression
    const double d{ 1.2 }; // 1.2 is an rvalue expression

    int y { x }; // x is a modifiable lvalue expression
    const double e { d }; // d is a non-modifiable lvalue expression
    int z { return5() }; // return5() is an rvalue expression (since the result is returned by value)

    int w { x + 1 }; // x + 1 is an rvalue expression
    int q { static_cast<int>(d) }; // the result of static casting d to an int is an rvalue expression

    return 0;
}

valor de location evalua un objeto. Es algo que perdura durante toda la ejecucion del programa 
valor de referencia o rvalue evalua un valor. Es algo temporal. 


#include <iostream>

int main()
{
    int x { 5 }; // normal integer
    int& ref { x }; // reference to variable value

     return 0;
} // x and ref die here

*/
int main()
{

    int x { 5 };

    int& ref { x };   // ref is a reference to x
    cout << ref << '\n'; // prints value of ref (5)
        // ref is destroyed here -- x is unaware of this

    cout << x << '\n'; // prints value of x (5)
}