#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
//recuento de las canastas de un partido de baloncesto se indica los nombres de los equipos L y V ir metiendo puntos de los equipos y mostrar el numero de canastas de cada tipo y el total de puntos de cada canasta, lo mismo con el total de puntos 
	
/* 	
	nombrelocal		nombrevisitante
	1					1
	2					2
	3					3
	*/	
	
	string loc[4], vis[4];
	char eq;
	
	cout<<"Nombre del primer equipo: ";
	getline(cin, loc[0]);
	
	
	cout<<"Nombre del segundo equipo: ";
	getline(cin, vis[0]);
	
	do{
		cout<<"que equipo ha anotado?"<<endl;
		cout<<loc[0]<<"(L)"<<endl;
		cout<<vis[0]<<"(V)"<<endl;
		cin>>eq;
		
	}
	while (eq!='x');
	
	
	
	return 0;
}

