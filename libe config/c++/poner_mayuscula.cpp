#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	/*cadenba y la ponemos en mayuscula*/
	string cadena;
	int i;

	cout<<"Escribe la cadena: ";
	getline(cin,cadena);
		
	for (i=0; i<cadena.size(); i+1);
	
	cadena[i]=toupper(cadena[i]);
	
	cout<<cadena;
	
	
	return 0;
}

