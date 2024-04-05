#include<iostream>
using namespace std;
int main(){
	float precio, precio_iva;
	cout << "Aplicador de IVA";
	cout << "Ingrese el precio del producto" << endl;
	cin >> precio;
	precio_iva = precio * 1.21;
	cout << "Su precio con IVA es de $" << precio_iva;
	 
	return 0;
}
