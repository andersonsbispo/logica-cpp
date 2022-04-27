#include<iostream>
#include<locale.h>
#include<string>
#include<math.h>
using namespace std;
main(){
	string tipoasb;
	float vempasb;
	int nparcasb;
	float taxaasb;
	float valortasb;
	float valorpasb;
	string respasb;
	
	setlocale(LC_ALL, "Portuguese");
	
	do{
		system("cls");
		cout<<"\n-------------------------------------------------------";
		cout<<"\n                   SISTEMA FINANCEIRA                  ";
		cout<<"\n-------------------------------------------------------";
		cout<<"\n\n Tipo do Cliente ( F / J )";
		cin>>tipoasb;
		cout<<"\n\n Valor do Empréstimo....: ";
		cin>>vempasb;
		cout<<"\n\n Número de Parcelas.....:";
		cin>>nparcasb;
		cout<<"\n-------------------------------------------------------";
		cout<<"\n TECLE ENTER PARA SIMULAR \n";
		system ("pause");
		
		if ((tipoasb=="F") & (vempasb<=1000)) {taxaasb = 0.015;};
		if ((tipoasb=="F") & (vempasb>1000) & (vempasb<=5000)) {taxaasb = 0.014;};
		if (((tipoasb=="J") & (vempasb<=5000)) + ((tipoasb=="F") & (vempasb>5000))) {taxaasb = 0.013;};
		if ((tipoasb=="J") & (vempasb>5000)) {taxaasb = 0.01;};
		valortasb = vempasb*pow((1+taxaasb),nparcasb);
		valorpasb = valortasb/nparcasb;
		
		system("cls");
		cout<<"\n-------------------------------------------------------";
		cout<<"\n                   SISTEMA FINANCEIRA                  ";
		cout<<"\n-------------------------------------------------------";
		cout<<"\n\n Valor do Empréstimo....: R$ " <<vempasb;
		cout<<"\n\n Taxa Operacional.......:" <<taxaasb*100<<" % ";
		cout<<"\n\n Número de Parcelas.....:" <<nparcasb;
		cout<<"\n\n Valor Total............: R$ " <<valortasb;
		cout<<"\n\n Valor de Parcela.......: R$ " <<valorpasb;
		cout<<"\n-------------------------------------------------------";
		cout<<"\n TECLE S PARA NOVA SIMULAÇÃO : ";
		cin>>respasb;
	}
	while (respasb == "S");
	cout<<"\n\n FIM DO PRAGRAMA !!!! ";
	return 0;
}
