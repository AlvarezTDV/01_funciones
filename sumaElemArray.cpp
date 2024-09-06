#include <iostream>
using namespace std;

int sumaElemArray(int, int []);
void mostrarArray(int, int []);
void ingresarElementosArray(int, int []);
void verificacion(int);

int main() {
	int resultadoSumaArray, capacidadArray;
	int array[500];
	cout << "// SUMA DE ELEMENTOS DE UN ARRAY //" << endl;
	cout << "Ingresa el tamanio del array (No sobrepase de 500!!): ";
	cin >> capacidadArray;
	
	//VERIFICAR SI EL USUARIO NO SOBREPASA EL LIMITE DEL ARREGLO
	if ( capacidadArray > 500) {
		cout << "ERROR: Se sobrepaso del limite";	
	} else {
		ingresarElementosArray(capacidadArray, array);
		mostrarArray(capacidadArray, array);
		resultadoSumaArray = sumaElemArray(capacidadArray-1, array); //SE RESTA EN 1 UNIDAD PARA QUE COINCIDA CON LAS POSICIONES DEL ARREGLO
		cout << "La suma de todos los elementos del array es: " << resultadoSumaArray;
	}
	
	return 0;
}

//FUNCION PARA INGRESAR ELEMENTOS AL ARRAY
void ingresarElementosArray(int capacidadArray, int array[]) {
	cout << "// Ingresa los elementos del array //" << endl;
	for ( int i = 0; i < capacidadArray; i++ ) {
		cout << "Elemento Nro " << i+1 << ": ";
		cin >> array[i];
	}
}

//FUNCION PARA MOSTRAR LOS ELEMENTOS DEL ARRAY INGRESADO
void mostrarArray(int capacidadArray, int array[]){
	cout << "// ARREGLO //" << endl;
	for ( int i = 0; i < capacidadArray; i++ ) {
		cout << array[i] << "  ";
	}
	cout << endl;
}

//FUNCION RECURSIVA PARA SUMAR LOS ELEMENTOS DEL ARRAY
//f(x) = x + x-1 + x-2 + ... + primer valor del array
int sumaElemArray(int capacidadArray, int array[500]) {
	//CASO BASE
	//	    {array[0], si x = 0
	// f(x) |
	//	    {array[x] + f(x-1, array), en caso contrario
	if ( capacidadArray == 0 ) {
		return array[0];
	} else {
		return array[capacidadArray] + sumaElemArray(capacidadArray-1, array);
	}
}
