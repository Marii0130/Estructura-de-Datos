#include<iostream>
using namespace std;
int main(){
	//Parte 3.1
	int edad; 
	char sexo; 
	float altura;
	cout << "Ingrese su edad: ";
	cin >> edad;
	cout << "Ingrese su sexo(m o f): ";
	cin >> sexo;
	cout << "Ingrese su altura en m: ";
	cin >> altura;
	
	cout << "Su edad es de " << edad << endl;
	
	if (sexo == 'm' || sexo == 'M'){
		cout << "Su sexo es masculino." << endl;
	} else if (sexo == 'f' || sexo == 'F'){
		cout << "Su sexo es femenino." << endl;
	}
	
	cout << "Su altura es de " << altura << " metros." << endl;
	cout << endl;
	
	//Parte 3.2
	
	cout << "Si se coloca un dato erroneo el resultado depende en donde se coloque." << endl;
	cout <<"Si se coloca en la primera entrada inmediatamente se termina el programa y aparecen los demas couts" << endl;
	cout << "   solo que el de sexo no se escribe porque no tiene dana y los demas tienen valor de 0." << endl;
	cout << "Si se coloca en la segunda entrada no va a aparecer el cout de sexo." << endl;
	cout << "Y por ultimo si se coloca en la tercera entrada coloca en cout un valor de 0" << endl;
	
	return 0;
}
