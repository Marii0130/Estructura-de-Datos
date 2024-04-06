#include<iostream>
using namespace std;
int main(){
	int num, factorial;
	cout << "Ingrese un numero para calcular su factorial: ";	
	cin >> num;
	
	for(int i=1; i <= num; i++){
		if (i==1){
			factorial = i;
		}else{
			factorial *= i;
		}
		
		if (i < num){
			cout << i << " * ";
		}else{
			cout << i << " = " << factorial;
		}
	}
	
	return 0;
}
