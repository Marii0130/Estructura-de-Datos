#include<iostream>
using namespace std;
int main(){
	int num;
	cout << "Las tablas de multiplicacion" << endl;
	cout << "Ingrese un numero del 1 al 10 para acceder a las opciones del menu" << endl;
	cout <<"1) Ver tabla del 1" << endl;
	cout <<"2) Ver tabla del 2" << endl;
	cout <<"3) Ver tabla del 3" << endl;
	cout <<"4) Ver tabla del 4" << endl;
	cout <<"5) Ver tabla del 5" << endl;
	cout <<"6) Ver tabla del 6" << endl;
	cout <<"7) Ver tabla del 7" << endl;
	cout <<"8) Ver tabla del 8" << endl;
	cout <<"9) Ver tabla del 9" << endl;
	cout <<"10) Ver tabla del 10" << endl;
	cout << endl;
	cout << "Opcion a escoger: ";
	cin >> num;
	switch(num){
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			cout << endl;
			cout << "Tabla del " << num << endl;
			cout << endl;
			for(int i = 1; i <= 10; i++){
				cout << num << " x " << i << " = " << (num*i) << endl;
			}
			break;
		default:
			cout << "ERROR, numero no valido.";
			break;
	}
	
	return 0;
}
