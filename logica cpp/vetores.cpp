#include<iostream>
#include<locale.h>
#include<string>

using namespace std;
main() {
	
	string nomeasb[10];
	float nota1asb[10];
	float nota2asb[10];
	int faltasasb[10];
	float mediaasb[10];
	string sitasb[10];
	int aprasb;
	int rnasb;
	int rfasb;
	float maiorasb, menorasb;
	float mediagasb;
	int acimaasb, abaixoasb;
	int x;
	
	setlocale(LC_ALL, "Portuguese");
	
	for (x=0;x<10;x++) {
		system("cls");
		cout<<"\n-------------------------------------------------------";
		cout<<"\n              SISTEMA EXEMPLO VETORES                  ";
		cout<<"\n-------------------------------------------------------";
		cout<<"\n\n Aluno : " << x+1;
		cout<<"\n\n Nome do Aluno...........: ";
		cin>>nomeasb[x];
		cout<<"\n\n Nota da P1..............: ";
		cin>>nota1asb[x];
		cout<<"\n\n Nota da P2..............: ";
		cin>>nota2asb[x];
		cout<<"\n\n Faltas..................: ";
		cin>>faltasasb[x];
		cout<<"\n-------------------------------------------------------";
		
		mediaasb[x]=(nota1asb[x] + nota2asb[x])/2;
		
		if ((mediaasb[x]>=7) & (faltasasb[x]<=10)) {
			sitasb[x] = "APROVADO";
			aprasb=aprasb + 1;
		};
		
		if ((mediaasb[x]<7) & (faltasasb[x]<=10)) {
			sitasb[x]="REPROVADO NOTA";
			rnasb=rnasb+1;
		};
		
		if (faltasasb[x]>10) {
			sitasb[x]="REPROVADO FREQUÊNCIA";
			rfasb=rfasb+1;
		};
		
		mediagasb=mediagasb+mediaasb[x]/10;
		
		cout<<"\n\n MÉDIA DO ALUNO...........: "<<mediaasb[x];
		cout<<"\n\n SITUAÇÃO DO ALUNO........: "<<sitasb[x];
		cout<<"\n-------------------------------------------------------";
		system("pause");
	}
	
	maiorasb=mediaasb[1];
	menorasb=mediaasb[1];
	for (x=0;x<10;x++) {
		if (mediaasb[x]>maiorasb) {
			maiorasb=mediaasb[x];
		};
		
		if (mediaasb[x]<menorasb) {
			menorasb=mediaasb[x];
		};
		
		if (mediaasb[x]>=mediagasb) {
			acimaasb=acimaasb+1;
		} else {
			abaixoasb=abaixoasb+1;
		};
	}
	
	system("cls");
	cout<<"\n-------------------------------------------------------";
	cout<<"\n              SISTEMA EXEMPLO VETORES                  ";
	cout<<"\n-------------------------------------------------------";
	cout<<"\n RESUMO FINAL : ";
	cout<<"\n APROVADOS................: "<<aprasb;
	cout<<"\n REPROVADOS EM NOTA.......: "<<rnasb;
	cout<<"\n REPROVADOS EM FREQUÊNCIA.: "<<rfasb;
	cout<<"\n MAIOR NOTA DA TURMA......: "<<maiorasb;
	cout<<"\n MENOR NOTA DA TURMA......: "<<menorasb;
	cout<<"\n MEDIA GERAL DA TURMA.....: "<<mediagasb;
	cout<<"\n ALUNOS A CIMA DA MÉDIA...: "<<acimaasb;
	cout<<"\n ALUNOS A BAIXO DA MÉDIA..: "<<abaixoasb;
	cout<<"\n-------------------------------------------------------";
	system("pause");
}
