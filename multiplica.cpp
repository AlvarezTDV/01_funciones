#include <iostream>
using namespace std;

int multiplicar(int, int);

int main() {
	int multiplicando, multiplicador, producto;
	cout << "// MULTIPLICACION DE DOS NUMEROS //" << endl;
	cout << "Ingrese el multiplicando: ";
	cin >> multiplicando;
	cout << "Ingrese el multiplicador: ";
	cin >> multiplicador;
	producto = multiplicar(multiplicando, multiplicador);
	cout << "El producto es: " << producto;
	return 0;
}

//FUNCION PARA MULTIPLICAR DOS NUMEROS USANDO FUNCIONES RECURSIVAS
//f(x,z) = x + x + x + ... + x } z veces
int multiplicar(int multiplicando, int multiplicador) {
	//CASO BASE
	//	      {0, si z = 0
	// f(x,z) |
	//	      {x + f(x,z-1), en caso contrario
	if ( multiplicador == 0 ) {
		return 0;
	} else {
		return multiplicando + multiplicar(multiplicando, multiplicador-1);
	}
}
