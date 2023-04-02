#include <iostream>
#include <locale.h>
#include <string>

using namespace std;
main(){
	
	char nomeasb[20];
	int idadeasb;
	string sexoasb;
	float cascoasb;
	float brutoasb;
	float vistaasb;
	float valor3xasb;
	float valor12xasb;
	float franqasb;
	string respasb;
	
	setlocale (LC_ALL, "Portuguese");
	cout.precision (2);
	cout<<fixed;
	
	do{
		system("cls");
		cout<<"\n             SISTEMA SEGURADORA             ";
		cout<<"\n            ANDERSON SANTOS BISPO           ";
		cout<<"\n--------------------------------------------";
		cout<<"\n ENTRADAS:";
		cout<<"\n NOME DO SEGURADO...:";
		cin>>nomeasb;
		cout<<"\n IDADE..............:";
		cin>>idadeasb;
		cout<<"\n SEXO...............:";
		cin>>sexoasb;
		cout<<"\n CASCO..............:";
		cin>>cascoasb;
		cout<<"\n--------------------------------------------";
		
		if ((sexoasb=="M") & (idadeasb>=18) & (idadeasb<30)) {brutoasb=cascoasb*0.09; franqasb=brutoasb*0.10;
		};
		
		if ((sexoasb=="F") & (idadeasb>=18) & (idadeasb<30)) {brutoasb=cascoasb*0.07; franqasb=brutoasb*0.08;
		};
		
		if ((idadeasb>=30) & (idadeasb<=60)) {brutoasb=cascoasb*0.05; franqasb=brutoasb*0.07;
		};
		
		if ((idadeasb>60) | ((idadeasb>55) & (sexoasb=="F"))){brutoasb=cascoasb*0.08; franqasb=brutoasb*0.09;
		};
		
		if (franqasb<400.00) {franqasb=400.00;
		};
		
		vistaasb=brutoasb*0.90;
        valor3xasb=brutoasb/3;
        valor12xasb=brutoasb*1.15/12;
        
        cout<<"\n SAÍDAS:";
        cout<<"\n BRUTO..............: R$" <<brutoasb;
        cout<<"\n VALOR À VISTA......: R$" <<vistaasb;
        cout<<"\n VALOR para 3x......: R$" <<valor3xasb;
        cout<<"\n VALOR para 12x.....: R$" <<valor12xasb;
        cout<<"\n FRANQUA............: R$" <<franqasb;
        cout<<"\n--------------------------------------------";
        cout<<"\n MENSAGEM : Deseja Realizar Nova Consulta <S/N>?";
        cin>>respasb;	
	}
	while (respasb == "S");
	cout<<"\n\n FIM DO PRAGRAMA !!!! ";
	return 0;
}

