#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int mat1[50][50],mat2[50][50],matSuma[50][50];
	int i, j, fil, col;
	
	cout<<"Introduce el numero de filas de las matrizes: ";
	cin>>fil;
	cout<<"Introduce el nuemro de columnas de las matrizes: ";
	cin>>col;
	cout<<endl;
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			mat1[i][j]=rand()%100;
			mat2[i][j]=rand()%100;
		}
	}
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			matSuma[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
		
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			if(mat1[i][j]<10){
				cout<<" "<<mat1[i][j]<<" ";
			} else {
				cout<<mat1[i][j]<<" ";
			}
		}
		cout<<"| ";
		for(j=0;j<col;j++){
			if(mat2[i][j]<10){
				cout<<" "<<mat2[i][j]<<" ";
			} else {
				cout<<mat2[i][j]<<" ";
			}
		}
		
		if(i==0){
			cout<<"|     SUMA    ";
		}
		else {
			cout<<"|             ";
		}
		for(j=0;j<col;j++){
			if(matSuma[i][j]<10){
				cout<<"  "<<mat1[i][j]<<" ";
			} else if (matSuma[i][j]>=100){
				cout<<matSuma[i][j]<<" ";
			} else {
				cout<<" "<<matSuma[i][j]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}

