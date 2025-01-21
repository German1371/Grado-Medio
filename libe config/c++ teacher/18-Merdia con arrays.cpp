#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string nombre[5],alum;
	int n_ex[50],i,t_al=0;
	float md_a[50]={0},nota,md_c=0;
	
	cout<<"Nombre del alumno/a: ";
	getline(cin,alum);
	
	alum[0]=toupper(alum[0]);
	while(alum!="X"){
		nombre[t_al]=alum;
		
		cout<<"Cantidad de exámenes realizados: ";
		cin>>n_ex[t_al];
		for(i=1;i<=n_ex[t_al];i++){
			cout<<"Nota del examen "<<i<<": ";
			cin>>nota;
			md_a[t_al]+=nota;
		}
		md_a[t_al]/=n_ex[t_al];
		
		t_al++;
		
		cin.ignore();
		cout<<"\nNombre del alumno/a: ";
		getline(cin,alum);
		
		alum[0]=toupper(alum[0]);
	}
	
	cout<<"\n----------------------------------------\n";
	cout<<"\nRESULTADOS";
	cout<<"\n==========\n";
		
	for(i=0;i<t_al;i++){
		cout<<(i+1)<<") "<<nombre[i]<<"\n    - Nº de exámenes: "<<n_ex[i]<<"\n    - Media: "<<md_a[i]<<endl<<endl;
		md_c+=md_a[i];
	}
	
	md_c/=t_al;
	cout<<"\n----------------------------------------\n";
	cout<<"\nMedia del curso: "<<md_c;
	return 0;
}

