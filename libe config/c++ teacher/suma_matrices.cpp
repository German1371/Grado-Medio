#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	unsigned int ran, table1[50][50], table2[50][50], table3[50][50], c, f,t_f,t_c;
	string sep;
	
	srand(time(NULL));
	
	cout << endl;
	
	cout<<"Indique número de filas: ";
	cin>>t_f;
	cout<<"Indique número de columnas: ";
	cin>>t_c;
	cout<<endl;
	
	
	for (f=0;f<t_f;f++) {
		for (c=0;c<t_c;c++) {
			ran=rand()%100;
			table1[f][c]=ran;
			if (ran<10)
				sep=" ";
			else
				sep="";
			if (c==(t_c-1)){
				cout <<sep<<table1[f][c] << "  "<<char(179)<<"  ";
			}
			else
					cout <<sep<<table1[f][c] << "  ";
		}
		
		for (c=0;c<t_c;c++) {
			ran=rand()%100;
			table2[f][c]=ran;
			if (ran<10)
				sep=" ";
			else
				sep="";
			if (c==(t_c-1))
				cout <<sep<<table2[f][c] << "  "<<char(179);
			else
				cout <<sep<<table2[f][c] <<"  ";
		}
		
		for (c=0;c<t_c;c++) {
			table3[f][c]=table1[f][c]+table2[f][c];
			
			if(c!=0)
				sep="  ";
			else
				if(f==0) 
				sep="     SUMA     ";
				else
					sep="              ";
				
				
				if(table3[f][c]<10)
					sep+="  ";
				else
					if(table3[f][c]<100)
					sep+=" ";
				
				cout <<sep<<table3[f][c];
		}
		cout << endl;
	}
	
	cout << endl;
	return 0;
}
