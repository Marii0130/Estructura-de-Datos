#include<iostream>
using namespace std;
int main(){
	int num, suma;
	do{
		cout << "Ingrese un numero: ";
		cin >> num;
		cout << endl;
		if (num == 0 || num >= 20 && num <= 30){
			break;
		}
		if (num > 0){
			suma += num;
		}
	}while (true);
	cout << "La suma de los numeros positivos ingresados es de " << suma << endl;
	
	return 0;
}
