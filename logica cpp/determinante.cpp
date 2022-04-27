#include<iostream>
#include<locale.h>
using namespace std;
main(){
	int a[3][3];
	int det;
	int i;
	int j;
	
	setlocale(LC_ALL, "Portuguese");
	
	system("cls");
	cout<<"\n-----------------------------------------";
	cout<<"\n              EXERCÍCIO MATRIZES         ";
	cout<<"\n-----------------------------------------";
	cout<<"\n DIGITE A MATRIZ : ";
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<"\n A("<<i+1<<","<<j+1<<"):";
			cin>>a[i][j];
		}
	};
	
	det = a[0][0]*a[1][1]*a[2][2]
		 +a[0][1]*a[1][2]*a[2][0]
		 +a[0][2]*a[1][0]*a[2][1]
		 -a[0][2]*a[1][1]*a[2][0]
		 -a[0][0]*a[1][2]*a[2][1]
		 -a[0][1]*a[1][0]*a[2][2];
		 
	cout<<"\n-----------------------------------------";
	cout<<"\n O DETERMINANTE DA MATRIZ É : "<<det;
	return 0;
}
