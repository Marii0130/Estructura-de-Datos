#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int num, aux, suma;
	cout << "Ingrese un numero: ";
	cin >> num;
	if (num < 0){
		cout << "Numero no valido, no se puede correr el programa." << endl; 
	}else{
		cout << "Los cuadrados de los primeros 10 numeros mayores a 0 son:" << endl;
		for(int i = 1; i <= 10; i++){
			aux = pow(i,2);
			suma += aux;
			if (i < 10){
				cout << aux << " + ";
			} else{
				cout << aux << endl; 
			}
		}
		cout << "La suma de los cuadrados da como resultado " << suma << "." << endl;
	}
	
	return 0;
}
