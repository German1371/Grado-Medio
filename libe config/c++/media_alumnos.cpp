#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int n_alumn, i;
	string alumnos[30][5];
	
	
	
	
	cout<<"Escribe el numero de alumnos: ";
	cin>>n_alumn;
	
	cout<<endl;
	
	for(i=0;i<=n_alumn-1;i++){
		cout<<"Escribe el nombre del alumno: ";
		cin.ignore();
		getline(cin,alumnos[i]);
	}
	
	
	
	return 0;
}

