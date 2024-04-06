#include<iostream>
using namespace std;
int main(){
	int num, res;
	cout << "Ingrese un numero para iniciar la cuenta: ";
	cin >> num;
	
	for(int i = 1; i <= num; i++){
		if (num < 0){
			break;
			cout << "ERROR, tiene que ser un numero positivo" << endl;
		}
		
		if (i==1){
			res = i;
			cout << i;
		} else if (i%2 == 0){
			res -= i;
			cout << " - " << i;
		} else{
			res += i;
			cout << " + " << i;
		}
		
		if (i == num){
			cout << " = " << res << endl;
		}
	}
	
	return 0;
}
