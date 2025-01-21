#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string nombre[30];
	int ex[30],f,c,n_al;
	float notas[30][6]={0,0};
	
	cout<<"CALCULO DE LA NOTA MEDIA DE ALUMNOS/AS\n";
	cout<<"======================================\n\n";
	cout<<"Introducción de los nombres de alumnos/as del curso\n";
	cout<<"---------------------------------------------------\n";
	cout<<"Indique el total de alumnos/as del curso: ";
	cin>>n_al;
	cin.ignore();
	cout<<"\nA continuación indique sus nombres: \n";
	for(f=0;f<n_al;f++){
		cout<<"   "<<(f+1)<<") ";
		getline(cin,nombre[f]);
	}
	
	cout<<"\n\nIntroducción del número de exámenes realizado y la nota obtenida\n";
	cout<<"----------------------------------------------------------------\n";
	
	for(f=0;f<n_al;f++){
		cout<<"   "<<(f+1)<<") "<<nombre[f];
		cout<<"\n        - Nº de exámenes: ";
		cin>>ex[f];
		for(c=0;c<ex[f];c++){
			cout<<"             * Nota examen "<<(c+1)<<": ";
			cin>>notas[f][c];
			notas[f][5]+=notas[f][c];
		}
		notas[f][5]/=ex[f];
		cout<<endl;
	}
	
	cout<<"\n\nConsulta individualizada de calificaciones del alumnado\n";
	cout<<"-------------------------------------------------------\n";
	
	do{
		for(f=0;f<n_al;f++)
			cout<<"   "<<(f+1)<<") "<<nombre[f]<<endl;
		
		cout<<"\nIndique el número del alumno/a a consultar: ";
		cin>>f;
		
		if (f!=0){
			cout<<"\n  Alumno/a: "<<nombre[f-1];
			cout<<"\n     - Nº de exámenes realizado: "<<ex[f-1];
			for(c=0;c<ex[f-1];c++)
				cout<<"\n           * Nota examen "<<(c+1)<<": "<<notas[f-1][c];
			cout<<"\n     - Media obtenida: "<<notas[f-1][5];
			cout<<"\n\n-----------------------------------------------\n\n";
		}
		
	}while(f!=0);
		
	cout<<"\n\n==============================================\n\n";
	cout<<"  -------- FIN DEL PROCESO ---------";
	return 0;
}

