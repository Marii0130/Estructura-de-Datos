#include<iostream>
/* En una clase de 5 alumnos se han realizado 3 exámenes, y se requiere determinar según se elija una opción
el número de: a) Alumnos que aprobaron todos los exámenes. b) Alumnos que aprobaron al menos un examen. c)
Alumnos que aprobaron únicamente el último examen.
*/
using namespace std;
int main(){
	int alumnos[5][3], alumno[3], nota, op, cont1 = 0, cont2 = 0, cont3 = 0, aux1 = 0, aux2 = 0;
	bool salir = false; 
	cout << "Ingrese las notas de los 5 alumnos" << endl;
	
	for (int a = 0; a < 5; a++){
		cout << endl;
		cout << "Alumno " << a + 1 << endl;
		for(int b = 0; b < 3; b++){
			if(b == 0){
				cout << "Ingrese la nota del primer examen: ";
				cin >> alumnos[a][b];
				cout << endl;
			} else if (b == 1){
				cout << "Ingrese la nota del segundo examen: ";
				cin >> alumnos[a][b];
				cout << endl;
			} else{
				cout << "Ingrese la nota del tercer examen: ";
				cin >> alumnos[a][b];
				cout << endl;
			} 
		}
	}
	
	do {
		cout << "Menu de redimiento academico" << endl;
		cout << "Seleccione una opcion segun lo desee saber" << endl;
		cout << endl;
		cout << "1) Ver alumnos que aprobaron todos los examenes" << endl;
		cout << "2) Ver alumnos que aprobaron al menos un examen" << endl;
		cout << "3) Ver alumnos que aprobaron unicamente el ultimo examen" << endl;
		cout << "4) Salir" << endl;
		cout << endl;
		cout << "Opcion elegida: ";
		cin >> op;
		cout << endl;
		switch(op){
			case 1:
				for (int c = 0; c < 5; c++){
					for(int d = 0; d < 3; d++){
						if (alumnos[c][d] >= 7){
							aux1 += 1;
						} else{
							aux1 = 0;
							break;
						}
						if (aux1 == 3){	
							cont1 += 1;
							aux1 = 0;
						}
					}
				}
				cout << "La cantidad de alumnos que aprobaron todos los examenes es de " << cont1 << " alumnos." << endl;
				cout << endl;
				cont1 = 0;
				break;
			case 2:
				for (int e = 0; e < 5; e++){
					for(int f = 0; f < 3; f++){
						if (alumnos[e][f] >= 7){
							cont2 += 1;
							break;
						}	 
					}
				}
				cout << "La cantidad de alumnos que aprobaron al menos un examen es de " << cont2 << " alumnos." << endl;
				cout << endl;
				cont2 = 0;
				break;
			case 3:
				for (int g = 0; g < 5; g++){
					if (alumnos[g][0] <= 6 && alumnos[g][1] <= 6 && alumnos[g][2] >= 7) {
            			cont3++;
        			}
				}
				cout << "La cantidad de alumnos que aprobaron unicamente el ultimo examen es de " << cont3 << " alumnos." << endl;
				cout << endl;
				cont3 = 0;
				break;
			case 4:
				salir = true;
				break;
			default:
				cout << "Numero no valido, intente otra vez" << endl;
				cout << endl;
			break;		
		}
	} while (salir == false);
	
	return 0;
}
