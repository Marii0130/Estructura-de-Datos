#include<stdio.h>
int main(){
	float num1, num2, suma, resta, multiplicacion, division;
	printf("Ingrese un numero: ");
	scanf("%f", &num1);
	printf("Ingrese otro numero: ");
	scanf("%f", &num2);
	printf("\n");
	
	suma = num1 + num2;
	resta = num1 - num2;
	multiplicacion = num1 * num2;
	division = num1 / num2;
	
	printf("Los numeros sumados dan como resultado %.2f\n", suma);
	printf("Los numeros restados dan como resultado %.2f\n", resta);
	printf("Los numeros multiplicados dan como resultado %.2f\n", multiplicacion);
	printf("Los numeros divididos dan como resultado %.2f\n", division);
	
	return 0;
}
