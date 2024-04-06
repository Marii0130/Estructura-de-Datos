#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int base, exponente, res;
	cout << "Ingresar el numero de la base: ";
	cin >> base;
	cout << "Ingresar el numero del exponente: ";
	cin >> exponente;
	cout << endl;
	
	for (int i = 0; i <= exponente; i++){
		res = pow(base,i);
		cout << base << " ^ " << i << " = " << res << endl;
	}
	
	return 0;
}
