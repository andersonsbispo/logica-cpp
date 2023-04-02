#include<iostream>
#include<locale.h>
#include<string>
using namespace std;
main(){
	int codasb;
	float pesoasb;
	string prodasb;
	float totalasb;
	float totalcompraasb;
	float pesototalasb;
	float freteasb;
	float impasb;
	float totalnotaasb;
	float precoasb;
	string respasb;
	
	setlocale(LC_ALL, "Portuguese");
	
	do{
		system("cls");
		cout<<"\n-------------------------------------------------------";
		cout<<"\n                   PROGRAMA CEASA                      ";
		cout<<"\n-------------------------------------------------------";
		cout<<"\n\n Digite o Código do Produto: ";
		cin>>codasb;
		cout<<"\n\n Digite o Peso (KG): ";
		cin>>pesoasb;
		cout<<"\n-------------------------------------------------------";
		
		switch (codasb){
			case 1 : prodasb="BANANA";
					 precoasb=0.85;
					 break;
			
			case 2 : prodasb="MAÇÃ";
					 precoasb=1.39;
					 break;
			
			case 3 : prodasb="UVAS";
					 precoasb=3.96;
					 break;
					 
			case 4 : prodasb="GOIABA";
					 precoasb=1.21;
					 break;
					 
			case 5 : prodasb="ABACAXI";
					 precoasb=1.06;
					 break;
			case 6 : prodasb="MELANCIA";
					 precoasb=0.35;
					 break;
					 
			default : prodasb="PRODUTO NÃO CADASTRADO";
					  precoasb=0;
					  break;
		};
		
		totalasb=precoasb * pesoasb;
		totalcompraasb=totalcompraasb + totalasb;
		pesototalasb = pesototalasb + pesoasb;
		
		cout<<"\n\n Produto..........: "<<prodasb;
		cout<<"\n\n Total............: R$ "<<totalasb;
		cout<<"\n\n Total da Compra..: R$ "<<totalcompraasb;
		cout<<"\n\n Peso Total.......: R$ "<<pesototalasb;
		cout<<"\n-------------------------------------------------------";
		cout<<"\n OUTRO PRODUTO ( S / N ) : ";
		cin>>respasb;		
	}
	while (respasb == "S");
}
