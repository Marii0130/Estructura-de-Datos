#include<stdio.h>
#include<cmath>
int main(){
	int a, b, c, var1, var2, cuenta, var;
	printf("Calculadora de funcion cuadratica\n");
	printf("Ingrese el valor de a: ");
	scanf("%d", &a);
	printf("Ingrese el valor de b: ");
	scanf("%d", &b);
	printf("Ingrese el valor de c: ");
	scanf("%d", &c);
	printf("\n");
	
	cuenta = pow(b,2)-4*a*c;
	if (cuenta > 0){
		var1 = ((-(b) + sqrt(cuenta))/(2*a));
		var2 = ((-(b) - sqrt(cuenta))/(2*a));
		printf("La funcion cuadratica tiene 2 raices.\n");
		printf("La primer raiz de la funcion cuadratica es %d.\n", var1); 
		printf("La segunda raiz de la funcion cuadratica es %d.\n", var2);
	}else if (cuenta == 0){
		var = ((-(b) + sqrt(cuenta))/(2*a));
		printf("La funcion cuadratica tiene una unica raiz.\n");
		printf("La unica raiz es %d.\n", var);
	}else{
		printf("La funcion cuadratica no tiene raices.\n");
	}
	
	
	return 0;
}
