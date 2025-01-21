#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {
	double op_1,op_2, resultado;
	char tipo;
	
	cout<<"Escribe un numero"<<endl;
	cin>>op_1;
	cout<<"Escribe otro numero"<<endl;
	cin>>op_2;
	cout<<"Que quieres hacer con el?"<<endl;
	cin>>tipo;
	
	switch (tipo)
	{
	case '+':
			resultado=op_1+op_2;
				break;
	case '-':
			resultado=op_1-op_2;
				break;
	case '*':
			resultado=op_1*op_2;
				break;
	case '/':
			resultado=op_1/op_2;
				break;
	case 'p':
			resultado=pow(op_1,op_2);
				break;
	default:
			resultado=sqrt(op_1);
				break;
	}
cout<<"Resultado: "<<resultado;
	return 0;
}

