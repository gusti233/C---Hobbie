/*
#include <iostream> 

// false = 0
// true = 1
// cuando iniicalizas una variable
int main() {
    std::cout<< std:: boolalpha; // -> para imprimir un valor booleano se muestre formato string 
    bool b1 {false};
    bool b2{true}; 

    std::cout<<"valor b1 " << !b1 << std::boolalpha;  // imprime -> true 




    std:: cout<<"\n valor b1 real : " << b1 ;
    
}
*/ 
#include <iostream>

int main()
{
	bool b{}; // default initialize to false
	std::cout << "Enter a boolean value: ";
	std::cin >> b;
	std::cout << "You entered: " << b << '\n';

	return 0;
} 
