#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string tx1,tx2,tx3="",tx;
	int pos,i,c=0;
	
	cout<<"Introduzca cadena inicial: ";
	getline(cin,tx1);
	cout<<"Introduzca cadena segundaria: ";
	getline(cin,tx2);
	
	if(tx1.size()<tx2.size())
		cout<<"\n||| No se puede encontrar la segunda cadena |||\n||| en la primera porque es de mayor tamaño |||";
	else{
		for(i=0;i<tx2.size();i++){
			tx=toupper(tx2[i]);
			tx3.append(tx);
		}
		pos=tx1.find(tx2);
		while(pos!=-1){
			c++;
			tx1.replace(pos,tx2.size(),tx3);
			pos=tx1.find(tx2,++pos);
		}
		cout<<"\nSalida: "<<tx1;
		cout<<"\nNúmero de cambios: "<<c;
	}
	
	return 0;
}

