#include<iostream>
/* A-Escriba un programa que calcule usando un while, el valor de: 1 + 2 + 3 +...+ n.
 B-Escriba un programa que calcule usando un for, el valor de: 1 + 3 + 5 +...+ 2n-1
*/
using namespace std;
int main(){
	int num, i = 0, suma1 = 0, suma2 = 0;
	do{
		cout << "Ingrese un numero positivo: ";
		cin >> num;
		if (num < 1){
			cout << "Numero no valido, intente otra vez" << endl; 
			cout << endl;
		}
	} while (num < 1);
	cout << endl;
	
	//A
	
	cout << "Parte A" << endl;
	while (i <= num){
		suma1 += i;
		if (i != 0){
			if (i < num){
				cout << i << " + ";
			} else {
				cout << i << " = " << suma1 << endl;
			}
		}
		i++;
	}
	cout << endl;
	
	//B
	
	cout << "Parte B" << endl;
	for(int j = 1; j <= num; j++){
		if (j%2 !=0){
			suma2 += j;
			if(j == num  || num - j == 1){
				cout << j << " = " << suma2 << endl;
			}else{
				cout << j << " + ";
			}	
		}
	}
	
	return 0;
}
