#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int ventas[6][5]={0};
	int loc,dis,cantidad;
	string localidad[5],disco[4];
	
	cout<<"Estadíatica de ventas de discos\n";
	cout<<"===============================\n\n";
	cout<<"Introducción de nombre de localidades\n";
	
	for(loc=0;loc<5;loc++){
		cout<<(loc+1)<<") ";
		getline(cin,localidad[loc]);
	}
	
	cout<<"\nIntroducción de nombre de los discos\n";
	
	for(dis=0;dis<4;dis++){
		cout<<(dis+1)<<") ";
		getline(cin,disco[dis]);
	}
	
	cout<<"\nProceso de entrada de datos\n";
	cout<<"---------------------------\n";
	
	cout<<"Indique el número del disco (0 - Fin de entrada): ";
	cin>>dis;
	while(dis!=0){
		cout<<"   - "<<disco[dis-1]<<endl;
		cout<<"Indique el número de la localidad: ";
		cin>>loc;
		cout<<"   - "<<localidad[loc-1]<<endl;
		cout<<"Indique las unidades vendidas: ";
		cin>>cantidad;
		
		ventas[loc-1][dis-1]+=cantidad;
		
		cout<<"\n---------------------------\n";
		cout<<"\nIndique el número del disco: ";
		cin>>dis;
	}
	
	cout<<"\n\nEstadísticas de ventas\n";
	cout<<"=======================\n";
	cout<<"*** General ***\n";
	
	for(loc=0;loc<5;loc++){
		cout<<(loc+1)<<") "<<localidad[loc]<<": "<<endl;
		for(dis=0;dis<4;dis++){
			cout<<"    - "<<disco[dis]<<": "<<ventas[loc][dis]<<endl;
			ventas[5][dis]+=ventas[loc][dis];
			ventas[loc][4]+=ventas[loc][dis];
		}
		cout<<endl;
	}
	
	cout<<"\n---------------------------\n";
	cout<<"\n*** Total localidad ***\n";
	
	for(loc=0;loc<5;loc++)
		cout<<(loc+1)<<") "<<localidad[loc]<<": "<<ventas[loc][4]<<endl;
		
		cout<<"\n---------------------------\n";
		cout<<"\n*** Total discos ***\n";
		
		for(dis=0;dis<4;dis++){
			cout<<(dis+1)<<") "<<disco[dis]<<": "<<ventas[5][dis]<<endl;
			ventas[5][4]+=ventas[5][dis];
		}
		
		cout<<"\n---------------------------\n";
		cout<<"\n*** Total de discos vendidos ***\n";
		cout<<"\nTotal: "<<ventas[5][4];
		return 0;
}
