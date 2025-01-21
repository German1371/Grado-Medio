#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(int argc, char *argv[]) {
	int i,n,dado[6]={0};

	srand(time(NULL));
	cout<<"Estadística 100 tiradas de un dado\n";
	cout<<"----------------------------------\n";
	for (i=1;i<=100;i++){
		n=1+rand() % (6);
		cout<<"Tirada "<<i<<": "<<n<<endl;
		dado[n-1]++;
	}
	
	cout<<"\n==========================\n";
	cout<<"\nResultado\n";
	cout<<"---------\n";
		
	for (i=1;i<7;i++)
		cout<<"Número "<<i<<": "<<dado[i-1]<<endl;
		
	return 0;
}

