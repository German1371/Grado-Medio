#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int b, m;
	float notaf, p_b, p_m;
	
	cout<<"Respuestas correctas: ";
	cin >> b;
	cout<<"\n";
	
	cout<<"Respuestas Incorrectas: ";
	cin >> m;
	cout<<"\n";
	
	p_b=b*0.5;
	p_m=m*0.2;
	notaf=float(p_b)-p_m;
	
	cout<<"Respuestas correctas: "<<p_b;
	cout<<"\n";
	cout<<"Nota Incorrectas: -"<<p_m;
	cout<<"\n";
	cout<<"Nota Final: "<<notaf;
	cout<<"\n";
	
	if (notaf>=5.0)
		cout<<"Aprobado \n";
	else
		cout<<"Suspenso \n";
	return 0;
}

