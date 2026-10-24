#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;
int main(){
	
	ifstream archivoEntrada ("input/archivoentrada.txt");
	
	if(archivoEntrada.is_open()){
		cout << "Archvio abierto" <<endl;
		
		string linea;
		while(getline(archivoEntrada, linea)){
			
		}
		
	}
	
	
}
