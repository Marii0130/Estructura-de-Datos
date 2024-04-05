#include<stdio.h>
#include<cmath>
int main(){
	float cateto1, cateto2, hipotenusa, perimetro, superficie;
	printf("Ingrese el valor del cateto A:");
	scanf("%f", &cateto1);
	printf("Ingrese el valor del cateto B:");
	scanf("%f", &cateto2);
	hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
	perimetro = cateto1 + cateto2 + hipotenusa;
	superficie = (cateto1 * cateto2) / 2;
	printf("El perimetro del triangulo es de %.2f centimetros\n", perimetro);
	printf("La superficie del triangulo es de %.2f centimetros cuadrados\n", superficie);
	printf("La hipotenusa del triangulo es de %.2f centimetros\n", hipotenusa);
	
	return 0;
}
