#include <iostream>
using namespace std;

int sumatoria(int); 

int main() {
	int numero, resultadoSumatoria;
	cout << "// SUMATORIA DE N NUMEROS //" << endl;
	cout << "Ingresa un numero: ";
	cin >> numero;
	resultadoSumatoria = sumatoria(numero);
	cout << "El resultado es: " << resultadoSumatoria;
	return 0;
}

//FUNCION RECURSIVA PARA HALLAR FACTORIAL
//f(x) = x + x-1 + x-2 + ... + 2 + 1
int sumatoria(int numero) {
	//CASO BASE
	//		{1, si x = 1
	// f(x) |
	//		{x + f(x-1), en caso contrario
	if ( numero == 1 ) {
		return 1;
	} else {
		return numero + sumatoria(numero-1);
	}
}