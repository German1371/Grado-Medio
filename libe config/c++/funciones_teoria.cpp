#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string cadena="informatica", cd2;
	char txt; 
	int p;
	
	cout<<cadena<<endl;
	cadena.clear();
	cout<<"Resultado"<<cadena<<endl;
	
	cadena="Hola";
	
	p=cadena.size();
	cout<<p<<endl;
	
	
	/*cuando es tipo char se le tiene que indicar el numero de cadenas que se le vana indicar y entre parentesis las cadenas
	  cadena.appened(1,"aaa")*/
	cd2="aaa";
	cadena.append(cd2);
	
	cout<<cadena<<endl;
	
	/*con las cadenas se pueden concatenar con el simbolo "+"*/
	
	/*para regoger la posicion se tiene que ussar una variable entera*/
	cadena="informatica";
	
	p=cadena.find("ic");
	cout<<p;
	
	/*se puede buscar a partir de un caracter */
	
	p=cadena.find("ic",3);
	
	/*substr*("posicion","cantidad")*/
	
	cd2=cadena.substr(1,3);
	cout<<cd2;
	
	/*replace("posicion","cantidad","cadena nueva que puede ser un numero diferente al numero de cadenas que se saca")*/
	
	cadena.replace(1,3,"aaa");
		cout<<cadena;
	
	/*toupper pone en mayuscula un caracter de una cadena*/
	cadena[1]=toupper(cadena[1]);
	cout<<cadena;
	
	/*tolower pone en minuscula*/
	return 0;
}

