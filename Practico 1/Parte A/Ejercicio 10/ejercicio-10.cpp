#include<iostream>
#include<ctime>
#include <locale.h> 
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	char nombre[30];
	int edad, anio_nacimiento, anio_actual;
	cout << "Ingrese su nombre: ";
	cin >> nombre;
	cout << "Ingrese su año de nacimiento: ";
	cin >> anio_nacimiento;
	
	time_t now = time(0);
    tm* timeinfo = localtime(&now);
    anio_actual = timeinfo->tm_year + 1900;
    
    edad = anio_actual - anio_nacimiento;
    
    cout << nombre <<" usted tiene o va a cumplir " << edad << " años." << endl;
	
	return 0;
}
