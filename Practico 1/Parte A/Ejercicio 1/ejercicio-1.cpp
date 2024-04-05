#include<iostream>
#include <string>
using namespace std;
int main(){
	string nombre,apellido;
	cout << "Ingrese su nombre " << endl;
	cin >> nombre;
	cout << "Ingrese su apellido " << endl;
	cin >> apellido;
	cout << "Bienvenido/a al programa " << nombre << " " << apellido << "." << endl << endl;
	
	//Con las 2 barras se hace un comentario de una linea
	/*Con las barras y asteriscos 
	se hacen comentarios 
	de varias lineas juntas*/
	cout << "Los comentarios de una linea se hacen con 2 barras(//) al principio de cada linea" << endl;
	cout << "Ejem: //cometario" << endl;
	cout << "Los comentarios de varias lineas se hacen con barras y asteriscos al principio(/*) del comentario y al final(*/) de este" << endl;
	cout << "Ejem: /*Comentario \nComentario*/" << endl;
	
	cout << "Los saltos de linea se hacen con 'endl' o su otra alternativa /+n" << endl;
	cout << "Ejem: salto de linea con 'endl'" << endl;
	cout << "Ejem: Salto de linea \ncon '/+n'";
	return 0;
}
