#include<iostream>
using namespace std;
int main(){
	int num1, num2, num3, aux;
	cout << "Intercabiar numeros" << endl;
	cout << "Ingrese tres numeros" << endl;
	cout << "Primer numero: ";
	cin >> num1;
	cout << "Segundo numero: ";
	cin >> num2;
	cout << "Tercer numero: ";
	cin >> num3;
	
	aux = num1;
	num1 = num2;
	num2 = num3;
	num3 = aux;
	
	cout << "Los numeros fueron intercambiados" << endl;
	cout << "Primer valor: " << num1 << endl;
	cout << "Segundo valor: " << num2 << endl;
	cout << "Tercer valor: " << num3 << endl;
	return 0;
}
