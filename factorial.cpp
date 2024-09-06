#include<iostream>
using namespace std;

int factorial(int);

int main(){
	int numero, resultadoFactorial;
	cout << "// FACTORIAL DE UN NUMERO //" << endl;
	cout << "Ingresa un numero: ";
	cin >> numero;
	resultadoFactorial = factorial(numero);
	cout << "El resultado es: " << resultadoFactorial;
	return 0;
}

//FUNCION RECURSIVA PARA HALLAR FACTORIAL
//f(x) = x * x-1 * x-2 * ... * 2 * 1
int factorial(int numero) {
	//CASO BASE
	//		{1, si x = 1 or x = 0
	// f(x) |
	//		{x * f(x-1), en caso contrario
	if ( numero == 1 || numero == 0 ) {
		return 1;
	} else {
		return numero * factorial(numero-1);
	}
}