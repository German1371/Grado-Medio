#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int bas, alt, area;
	float  areatri;
	cout<<"Dime la base ";
	cin >> bas;
		
	cout<<"Dime la altura ";
	cin >> alt;
	
	cout<<"---------------------------\n"<<endl;
	area=bas*alt;
	cout<<"Area del cuadrado: "<<area<<endl;
	
	
	cout<<"---------------------------"<<endl;
	area=bas*bas;
	cout<<"Area del rectangulo: "<<area<<endl;
	
	cout<<"---------------------------"<<endl;
	area=(bas*alt)/2.0;
	cout<<"Area del triangulo: "<<area<<endl;
	cout<<"---------------------------";
	return 0;
}

