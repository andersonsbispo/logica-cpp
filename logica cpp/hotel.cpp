#include<iostream>
#include<locale.h>
#include<string>
using namespace std;
main(){
	char nomeasb[20];
	int diariasasb;
	int mesasb;
	float valordasb;
	float valortotalasb;
	string respasb;
	
	setlocale(LC_ALL, "Portuguese");
	
	do{
		system("cls");
		cout<<"\n-------------------------------------------------------";
		cout<<"\n                      HOTEL BRASIL                     ";
		cout<<"\n-------------------------------------------------------";
		cout<<"\n\n Digite o nome do hóspede: ";
		cin>>nomeasb;
		cout<<"\n\n Digite o número de diárias: ";
		cin>>diariasasb;
		cout<<"\n\n Digite o más de hospedagem: ";
		cin>>mesasb;
		cout<<"\n-------------------------------------------------------";
		
		switch (mesasb){
			case 1 : valordasb=300;
						break;
						
			case 12 : valordasb=300;
						break;
						
			case 7 : valordasb=280;
						break;
						
			case 2 : valordasb=250;
						break;
						
			case 8 : valordasb=250;
						break;
					
			case 3 : case 4 : case 5 : case 6 : case 9 : case 10 : case 11: valordasb=200;
						break;
						
			default : cout<<"\n Más não existente";
						valordasb=0;
							break;
					 			
		};
		
		valortotalasb = diariasasb * valordasb;
		
		cout<<"\n\n Valor da diária...........: R$ "<<valordasb;
		cout<<"\n\n Valor Total da Hospedagem.: R$ "<<valortotalasb;
		cout<<"\n-------------------------------------------------------";
		cout<<"\n Digite s para novo cliente : ";
		cin>>respasb;		
	}
	while (respasb == "S");
	cout<<"\n\n FIM DO PROGRAMA !!!";
	return 0;
}
