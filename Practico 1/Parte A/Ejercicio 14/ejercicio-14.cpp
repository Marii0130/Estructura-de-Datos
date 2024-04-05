#include<stdio.h>
#include<cmath>
int main(){
	int x, y;
	float res;
	printf("Calculadora de funcion\n");
	printf("Ingrese el valor de x: ");
	scanf("%d", &x);
	printf("Ingrese el valor de y: ");
	scanf("%d", &y);
	printf("\n");
	
	res = sqrt(x)/(pow(y,2)-1);
	printf("El resultado de la funcion es %.2f.\n", res); 
	
	return 0;
}
