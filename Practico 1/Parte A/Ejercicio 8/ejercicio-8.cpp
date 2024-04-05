#include<stdio.h>
int main(){
	int alumnos, nota1, nota2, nota3;
	float calificacion_final;
	printf("Ingrese la cantidad de alumnos: ");
	scanf("%d", &alumnos);
	for (int i = 1; i <= alumnos; i++){
		printf("Alumno numero %d:\n", i);
		printf("Ingrese la nota de practicas: ");
		scanf("%d", &nota1);
		printf("Ingrese la nota teorica: ");
		scanf("%d", &nota2);
		printf("Ingrese la nota de participacion: ");
		scanf("%d", &nota3);
		calificacion_final = (nota1 * 0.3)+(nota2 * 0.6)+(nota3*0.1);
		printf("La calificacion final del alumno numero %d es de %.2f\n", i, calificacion_final);
		printf("\n");
	}
	
	return 0;
}
