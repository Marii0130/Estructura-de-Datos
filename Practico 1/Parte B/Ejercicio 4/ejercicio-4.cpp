#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<stdio.h>
using namespace std;
int main(){
	float temperatura, min = 200, max = -200, suma = 0, media, cambio; 
	int signo, hora = 0;
	srand(time(NULL));
	cout << "Ingrese la temperatura para iniciar: ";
	cin >> temperatura;
	cout << endl;
	while (hora < 24){
		if (hora % 4 == 0){
			cambio = (rand() % 31)/10.0;
			signo = (rand() % 2) + 1; 
			if (signo == 1){
				temperatura -= cambio;
				cout << "La hora actual es las " << hora << " y la temperatura es de " << temperatura << " grados." << endl;
			} else if (signo == 2){
				temperatura += cambio;
				cout << "La hora actual es las " << hora << " y la temperatura es de " << temperatura << " grados." << endl;
			}
		}
		
		if (temperatura > max){
			max = temperatura;	
		}
		
		if(temperatura < min){
			min = temperatura;
		}
		
		suma += temperatura;
		
		hora += 4;
	}
	
	media = suma / 6.00;
	cout << endl;
	cout << "La temperatura mas alta registrada es de " << max << " grados." << endl;
	cout << "La temperatura mas baja registrada es de " << min << " grados." << endl;
	printf("La temperatura media es de %.2f grados.", media);
	
	return 0;
} 
