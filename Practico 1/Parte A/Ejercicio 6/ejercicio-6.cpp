#include<iostream>
#include<cmath>
using namespace std;
int main(){
	
	//Parte 6.1
	
	int num1, num2, seg1, seg2, horas1, horas2, min1, min2;
	cout << "Parte 6.1" << endl;
	cout << "Conversor de segundos a horas, minutos y segundos" << endl;
	cout << "Ingrese la cantida de segundos que desea convertir a horas, minutos y segundos:" << endl;
	cin >> num1;
	horas1 = num1/3600;
	min1 = (num1%3600)/60;
	seg1 = num1%60;
	cout << "La cantidad de horas obtenidas es de " << horas1 << " horas." << endl;
	cout << "La cantidad de minutos obtenidas es de " << min1 << " minutos." << endl;
	cout << "La cantidad de segundos obtenidas es de " << seg1 << " segundos." << endl;
	cout << endl;
	
	//Parte 6.2
	
	cout << "Parte 6.2" << endl;
	cout << "Conversor de horas, minutos y segundos a segundos" << endl;
	cout << "Ingrese la cantidad de horas que desee convertir:" << endl;
	cin >> horas2;
	cout << "Ingrese la cantidad de horas que desee convertir:" << endl;
	cin >> min2;
	cout << "Ingrese la cantidad de horas que desee sumar:" << endl;
	cin >> seg2;
	num2 = (horas2*3600) + (min2*60) + seg2;
	cout << "La cantidad de segundos obtenida fue de " << num2 << " segundos." <<endl;
	
	return 0;
}
