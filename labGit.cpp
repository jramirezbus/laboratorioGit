#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;
int main(){
	
	ifstream archivoEntrada ("input/archivoEntrada.txt");
	ofstream archivoSalida ("output/archivoSalida.txt");
	
	if(archivoEntrada.is_open() && archivoSalida.is_open()){
		cout << "Archvio abierto" <<endl;
		string linea;

		while(getline(archivoEntrada, linea)){

			archivoSalida << linea;
			cout << linea << endl;

		}
		cout << "Archivo copiado exitosamente" << endl;
	}
	
	
}
