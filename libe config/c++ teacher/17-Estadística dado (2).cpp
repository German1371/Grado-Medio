#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(int argc, char *argv[]) {
	int i,n,dado[7]={0};
	float tp;
	
	srand(time(NULL));
	cout<<"Estadística tiradas de un dado\n";
	cout<<"----------------------------------\n";
	
	n=rand() % (7);
	while(n!=0){
		dado[0]++;
		dado[n]++;
		cout<<"Tirada "<<dado[0]<<": "<<n<<endl;
		n=rand() % (7);
	}
	cout<<"Tirada "<<(dado[0]+1)<<": "<<n<<endl;
	
	cout<<"\n==========================\n";
	cout<<"\nResultado\n";
	cout<<"---------\n";
	
	if (dado[0]==0)
		cout<<"No se ha realizado ninguna tirada";
	else{
		for (i=1;i<7;i++){
			tp=float(dado[i])/dado[0]*100;
			cout<<"Número "<<i<<": "<<dado[i]<<"  ("<<tp<<"%)"<<endl;
		}
	}
	return 0;
}
