#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<cmath>
using namespace std;
int main(){
	int base, exp, res;
	srand (time(NULL));
	base = rand() % 41 + 2;
	do{
		cout << "Ingrese un numero entre 1 y 5 como exponente de " << base << ": ";
		cin >> exp;
		if (exp < 1 || exp > 5){
			cout << "Exponente no valido, intente otra vez" << endl; 
		}
	} while (exp < 1 || exp > 5);
	
	cout << endl;
	res = base;
	for(int i = 1; i < exp; i++){
		res *= base;
	}
	cout << base << " elevado a la " << exp << " da como resultado " << res << "." << endl;
	
	return 0;
}
