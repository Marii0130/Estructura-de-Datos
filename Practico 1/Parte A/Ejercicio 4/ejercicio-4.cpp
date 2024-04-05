#include<stdio.h>
using namespace std;
int main(){
	float pesos;
	float dolares;
	
	printf("Ingrese la cantidad de pesos que desea convertir: ");
	scanf("%f",&pesos);
	dolares = pesos / 862.75;
	printf("La cantidad ingresada corresponde a $%.2f dolares", dolares);
    
	return 0;
}
