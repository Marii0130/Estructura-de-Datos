#include<iostream>
using namespace std;
int main(){
	int num, aux1 = 0, aux2 = 0, res;
	cout << "Ingresar un numero para llegar al mismo numero o \nel más proximo al numero con el metodo fibonacci: ";
	cin >> num;
	for(int i = 0; i <= num; i++){
		if (i == 0){
			aux1 = i;
			res = i;
		}else if (i == 1){
			aux2 = i;
			res = i;
		} else if (i > 1){
			res = aux1 + aux2;
			aux1 = aux2;
			aux2 = res;
		}
		if(res <= num){
			cout << res << " ";
		}else{
			break;
		}
	}
	cout << endl;
	
	return 0;
}
