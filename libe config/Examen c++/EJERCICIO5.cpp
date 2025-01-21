#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int mat[4][4]={0}, ale, f, c;
	
	for(f=0;f<=3;f++){
		for(c=0;c<=3;c++)
		mat[f][c]=rand()%100;
	}
	
	for(f=0;f<=3;f++){
		for(c=0;c<=3;c++){
			cout<<mat[f][c]<<" ";
		}
		cout<<endl;
	}
	
	
	return 0;
}

