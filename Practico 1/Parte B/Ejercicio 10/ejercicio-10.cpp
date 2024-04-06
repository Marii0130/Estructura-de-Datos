#include<iostream>
using namespace std;
int main(){
	int num, factorial, suma;
	cout << "Ingrese un numero para calcular la suma de factoriales: ";	
	cin >> num;
	
	for(int i=1;i<=num;i++){
		for(int j=1; j <= i; j++){
			if (j==1){
				factorial = j;
			}else{
				factorial *= j;
			}
		}
		if(factorial != 1){
			suma += factorial;
		}
		if (i < num){
			cout << i << "! + ";
		}else{
			cout << i << "! = " << suma;
		}
		}
	cout << endl;
	
	return 0;
}
