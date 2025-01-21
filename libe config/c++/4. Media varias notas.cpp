#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num_exam, num_notasclase, num_trabajos;
	float nota_clase, nota_clase2, nota_exam1, nota_exam2, nota_exam3;
	float nota_trab1, nota_trab2, nota_trab3, nota_trab4, nota_trab5;
	float mediaTrabajos, mediaExamenes, mediaClase, media;
	
	
	cout<<"Introduce el numero de examenes que has hecho: "<<endl;
	cin>>num_exam;
	
	cout<<"Nota examen 1: ";
	cin>>nota_exam1;
	cout<<"Nota examen 2: ";
	cin>>nota_exam2;
	
	if (num_exam==2)
		mediaExamenes=(nota_exam1+nota_exam2)/2;
	else
		{
		cout<<"Nota examen 3: ";
		cin>>nota_exam3;
		mediaExamenes=(nota_exam1+nota_exam2+nota_exam3)/3;
	}
	
	cout<<"La nota media de examenes es: "<<mediaExamenes<<endl;
	
	cout<<"Introduce el numero de notas de clase: "<<endl;
	cin>>num_notasclase;
	cout<<"Ingresa la nota de clase 1: "<<endl;
	cin>>nota_clase;
	
	if (num_notasclase==1)
		mediaClase=nota_clase;
	else
		{
		cout<<"Ingresa la nota de clase 2: "<<endl;
		cin>>nota_clase2;
		mediaClase=(nota_clase+nota_clase2)/2;
	}
	
	cout<<"La media de notas de clase es: "<<mediaClase<<endl;
	
	cout<<"Introduce el numero de trabajos que has hecho: "<<endl;
	cin>>num_trabajos;
	cout<<"Ingresa la nota del trabajo 1: "<<endl;
	cin>> nota_trab1;
	cout<<"Ingresa la nota del trabajo 2: "<<endl;
	cin>> nota_trab2;
	cout<<"Ingresa la nota del trabajo 3: "<<endl;
	cin>> nota_trab3;
	cout<<"Ingresa la nota del trabajo 4: "<<endl;
	cin>> nota_trab4;
	if (num_trabajos==4)
		mediaTrabajos=(nota_trab1+nota_trab2+nota_trab3+nota_trab4)/4;
	else
		{
		cout<<"Ingresa la nota del trabajo 5: "<<endl;
		cin>> nota_trab5;
		mediaTrabajos=(nota_trab1+nota_trab2+nota_trab3+nota_trab4+nota_trab5)/5;
	}
	
	cout<<"La media de los trabajos es: "<<mediaTrabajos<<endl;
	
	media=(0.40*mediaExamenes)+(0.35*mediaTrabajos)+(0.25*mediaClase);
	cout<<"La nota final del trimestre es: "<<media<<endl;
	return 0;
}

