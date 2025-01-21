#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string  cadena;
	int i, lon;
	
	cout<<"Introduzca cadena inicial: ";
	getline(cin,cadena);
	
	lon=cadena.length();
	for(i=0;i>=lon;i++)
		if (cadena[i]==toupper(cadena[i]))
			cadena[i]==tolower(cadena[i]);
		else
			cadena[i]==toupper(cadena[i]);
		
	cout<<cadena<<endl;
	return 0;
}

