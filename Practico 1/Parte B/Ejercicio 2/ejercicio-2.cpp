#include<iostream>
using namespace std;
int main(){
	int num, contador = 0;
	cout << "Contador de numeros positivos" << endl;
	cout << endl;
	do{
		cout << "Ingrese un numero: ";
		cin >> num;
		if (num > 0){
			contador++;
		}
	}while(num != 0);
	cout << endl;
	cout << "Acaba de salir del bucle." << endl;
	cout << "La cantidad de numeros ingresado mayores a cero es de " << contador << " numeros." << endl;
	
	return 0;
}
