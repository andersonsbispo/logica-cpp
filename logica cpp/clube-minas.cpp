#include <iostream>
#include <locale.h>
#include <string>

using namespace std;
main(){
	
	char nomeasb[20];
	int idadeasb;
	int tempotreinoasb;
	float matriculaasb;
	string categoriaasb;
	float mensalidadeasb;
	float valor5mesesasb;
	float valor10mesesasb;
	string respasb;
	
	setlocale (LC_ALL, "Portuguese");
	cout.precision (2);
	cout<<fixed;
	
	do{
		system("cls");
		cout<<"\n                 CLUBE MINAS                ";
		cout<<"\n            ANDERSON SANTOS BISPO           ";
		cout<<"\n--------------------------------------------";
		cout<<"\n ENTRADAS:";
		cout<<"\n NOME DO ATLETA........:";
		cin>>nomeasb;
		cout<<"\n IDADE................:";
		cin>>idadeasb;
		cout<<"\n TEMPO DE TREINO......:";
		cin>>tempotreinoasb;
		cout<<"\n MATRÍCULA............:";
		cin>>matriculaasb;
		cout<<"\n--------------------------------------------";
		
        
        if (idadeasb <5){
        	cout<<"\n ATLETAS MENORES QUE 5 ANOS NÃO SÃO ADMITIDOS NO CLUBE";
			categoriaasb = "NÃO PREENCHE OS REQUESITOS MÍNIMOS PARA SE MATRICULAR AO CLUBE";
			mensalidadeasb = matriculaasb*0;
        	};
														
        if ((idadeasb >=5) & (idadeasb <=11)){
        	categoriaasb = "INFANTIL";
            mensalidadeasb = matriculaasb*0.50;
		};
                                                
        
        if (((idadeasb >=12) & (idadeasb <=18)) | ((idadeasb >=19) & (tempotreinoasb <24))){
        	categoriaasb = "JUVENIL";
            mensalidadeasb = matriculaasb*0.75;
		};
                                                                                                
        
        if (((idadeasb >=19) & (tempotreinoasb >=24)) | ((idadeasb >=14) & (tempotreinoasb >108))){
        	categoriaasb = "ADULTO";
            mensalidadeasb = matriculaasb;
		};
                                                                                                        
        
        valor5mesesasb = mensalidadeasb*5*0.95;
        valor10mesesasb = mensalidadeasb*10*0.90;
        
        cout<<"\n SAÍDAS:";
        cout<<"\n CATEGORIA............:" <<categoriaasb;
        cout<<"\n MENSALIDADE..........: R$" <<mensalidadeasb;
        cout<<"\n VALOR 5 VEZES........: R$" <<valor5mesesasb;
        cout<<"\n VALOR 10 VEZES.......: R$" <<valor10mesesasb;
        cout<<"\n--------------------------------------------";
        cout<<"\n MENSAGEM : Deseja Realizar Nova Consulta <S/N>?";
        cin>>respasb;
	}
	while (respasb == "S");
	cout<<"\n\n FIM DO PRAGRAMA !!!! ";
	return 0;
}
