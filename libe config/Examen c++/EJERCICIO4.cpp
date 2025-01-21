#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int num[100], may=0,men=0,igual=0,mul=0,suma=0, referencia, pos, i;
	
	for(i=0;i<=99;i++){
		num[i]=rand() % 1000;
	}
	
	cout<<"Numero de referencia: ";
	cin>>referencia;
	for (pos=0;pos<100;pos++){
		if (referencia>num[pos])
			men++;
		else
			if (referencia==num[pos]){
				igual++;
				mul++;
				suma+=referencia;
		}
			else{
				may++;
				if ((num[pos]%referencia)==0){
					mul++;
					suma+=num[pos];
				}
			}
	}
	
	cout<<"\n-------------Resumen-------------\n";
	cout<<"Mayores: "<<may<<endl;
	cout<<"Iguales: "<<igual<<endl;
	cout<<"Menores: "<<men<<endl;
	cout<<"Múltiplos: "<<mul<<endl;
	cout<<"Suma de los multiplos: "<<suma<<endl;
	return 0;
	
}

