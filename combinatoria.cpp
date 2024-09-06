#include <iostream>
using namespace std;

int combinatoria(int, int); 

int main() {
	int terminoSuperior, terminoInferior, resultadoCombinatoria;
	cout << "// COMBINATORIA //" << endl;
	cout << "Ingresa el termino superior: ";
	cin >> terminoSuperior;
	cout << "Ingresa el termino inferior: ";
	cin >> terminoInferior;
	resultadoCombinatoria = combinatoria(terminoSuperior, terminoInferior);
	cout << "El resultado es: " << resultadoCombinatoria;
	return 0;
}

//FUNCION RECURSIVA PARA HALLAR COMBINATORIA
//n = ELEMENTO SUPERIOR          K = ELEMENTO INFERIOR
//nCk = n-1Ck-1 + n-1Ck
int combinatoria(int terminoSuperior, int terminoInferior) {
	//CASO BASE
	//	   {1, si n = k
	// nCk |n, si k = 1
	//	   {n-1Ck-1 + n-1Ck, en caso contrario
	if ( terminoSuperior == terminoInferior ) {
		return 1;
	} else {
		if ( terminoInferior == 1 ) {
			return terminoSuperior;
		} else {
			return combinatoria(terminoSuperior-1, terminoInferior-1) + combinatoria(terminoSuperior-1, terminoInferior);
		}
	}
}