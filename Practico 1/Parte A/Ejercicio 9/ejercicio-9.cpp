#include<iostream>
#include<string>
using namespace std;
int main(){
	string nadadora1_nombre, nadadora2_nombre;
	float nadadora1_tiempo, nadadora2_tiempo;
	cout << "Ingrese el nombre de la nadadora 1" << endl;
	cin >> nadadora1_nombre;
	cout << "Ingrese el tiempo de nado que hizo la nadadora 1" << endl;
	cin >> nadadora1_tiempo;
	cout << "Ingrese el nombre de la nadadora 2" << endl;
	cin >> nadadora2_nombre;
	cout << "Ingrese el tiempo de nado que hizo la nadadora 2" << endl;
	cin >> nadadora2_tiempo;
	if (nadadora1_tiempo < nadadora2_tiempo){
		cout << "La nadadora 1 (" << nadadora1_nombre << ") gano la competicion" << endl;
	} else if(nadadora1_tiempo > nadadora2_tiempo){
		cout << "La nadadora 2 (" << nadadora2_nombre << ") gano la competicion" << endl;
	}else{
		cout << "Ambas nadadoras empataron en la competencion." << endl;
	}
	
	return 0;
}
