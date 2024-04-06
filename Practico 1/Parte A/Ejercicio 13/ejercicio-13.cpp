#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	cout << "Ejercicio A" << endl;
    float a, b;
    cout << "Ingrese el numero a:" ;
    cin >> a;
    cout << "Ingrese el numero b:" ;
    cin >> b;
    float ejercicioA = (a/b) + 1;
    cout << "El resultado del ejercicio A es: " << fixed << std::setprecision(2) << ejercicioA << endl;
    cout << endl;
    
    cout << "Ejercicio B" << endl;
	float a1, b1 ,c1, d1;
    cout << "Ingrese el numero a:" ;
    cin >> a1;
    cout << "Ingrese el numero b:" ;
    cin >> b1;
    cout << "Ingrese el numero c:" ;
    cin >> c1;
    cout << "Ingrese el numero d:" ;
    cin >> d1;
    float ejercicioB = (a1 + b1)/(c1 + d1);
    cout << "El resultado del ejercicio B es: " << fixed << std::setprecision(2) << ejercicioB << std::endl;
    cout << endl;
    
    cout << "Ejercicio C" << endl;
	float a2, b2 ,c2, d2, e2, f2;
    cout << "Ingrese el numero a:" ;
    cin >> a2;
    cout << "Ingrese el numero b:" ;
    cin >> b2;
    cout << "Ingrese el numero c:" ;
    cin >> c2;
    cout << "Ingrese el numero d:" ;
    cin >> d2;
    cout << "Ingrese el numero e:" ;
    cin >> e2;
    cout << "Ingrese el numero f:" ;
    cin >> f2;
    float ejercicioC = (a2+(b2/c2)/d2+(e2/f2));
    cout << "El resultado del ejercicio C es: " << fixed << setprecision(2) << ejercicioC << endl;
    cout << endl;

    cout << "Ejercicio D" << endl;
	float a3, b3 ,c3, d3;
    cout << "Ingrese el numero a:" ;
    cin >> a3;
    cout << "Ingrese el numero b:" ;
    cin >> b3;
    cout << "Ingrese el numero c:" ;
    cin >> c3;
    cout << "Ingrese el numero d:" ;
    cin >> d3;
    float ejercicioD = a3 + (b3 / (c3 - d3));
    cout << "El resultado del ejercicio D es: " << std::fixed << setprecision(2) << ejercicioD << endl;
    cout << endl;
    
   return 0;
}
