// Utilizar el debugger para detectar los errores y corregirlos (inspect the debug stack table)
#include <iostream>

int readNumber(int x)
{
	std::cout << "Please enter a number: ";
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The sum is: " << x << '\n';
}

int main()
{
	int x {};
	readNumber(x);
	x = x + readNumber(x);
	writeAnswer(x);

	return 0;
}


/* Solucion ->
int readNumber()
{
    int x; 
	std::cout << "Please enter a number: ";
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The sum is: " << x << '\n';
}

int main()
{
	int x= {readNumber()};
	x = x + readNumber();
	writeAnswer(x);

	return 0;
}

*/ 