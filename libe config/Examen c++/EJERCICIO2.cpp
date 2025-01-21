#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int un=0, dec=0, cen=0,ale, num=0;
	
	
	while (ale!=0 && ale!=1000){
		ale=rand()%1000;
		num++;
		if(ale<10){
			un++;
		}
		else{
			if(ale<100){
				dec++;
			}
			else
			   {
				if(ale>=100){
					cen++;
				}
			}
		}
		
	}
	cout<<"Numeros totales: "<<num<<endl;
	cout<<"Unidades: "<<un<<" Porcentaje: "<<un*100/float(num)<<"%"<<endl;
	cout<<"Decenas: "<<dec<<" Porcentaje: "<<dec*100/float(num)<<"%"<<endl;
	cout<<"Centenas: "<<cen<<" Porcentaje: "<<cen*100/float(num)<<"%"<<endl;
	
	return 0;
}

