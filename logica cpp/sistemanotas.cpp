#include <iostream>
#include <locale.h>

using namespace std;

main(){
    string nomeasb;
    float p1asb;
    float p2asb;
    float previaasb;
    float atividadesasb
    int faltasasb;
    float mediaasb;
    string situacaoasb;

    setlocale(LC_ALL, "Portuguese");

    system("cls");
    cout<<"\n----------------------------------------------------";
    cout<<"\n            PRÁTICA 3 - SISTEMA BOLETIM             ";
    cout<<"\n----------------------------------------------------";
    cout<<"\n\n Nome do Aluno...................................:";
    cin>>nomeasb;
    cout<<"\n\n Prova 1.........................................:";
    cin>>p1asb;
    cout<<"\n\n Prova 2.........................................:";
    cin>>p2asb;
    cout<<"\n\n Prévias.........................................:";
    cin>>previaasb;
    cout<<"\n\n Atividades......................................:";
    cin>>atividadesasb;
    cout<<"\n\n Faltas..........................................:";
    cin>>faltasasb;
    cout<<"\n----------------------------------------------------";
    cout<<"\n TECLE ENTER PARA GERAR O BOLETIM \n";
    cout<<"\n----------------------------------------------------";
    system("pause");

    mediaasb = p1asb*0.3 + p2asb*0.3 + previaasb*0.2 + atividadesasb*0.2;
    if (faltasasb>10) {
        situacaoasb="REPROVADO FREQUÊNCIA";
        } else {
            if (mediaasb>=7) {
                situacaoasb="Aprovado";
            } else {
                situacaoasb="Reprovado Nota";
            }
        };
    
    system("cls");
    cout<<"\n----------------------------------------------------";
    cout<<"\n            PRÁTICA 3 - SISTEMA BOLETIM             ";
    cout<<"\n----------------------------------------------------";
    cout<<"\n\n Aluno............:"<<nomeasb;
    cout<<"\n\n Média Final......:"<<mediaasb;
    cout<<"\n\n Faltas...........:"<<faltasasb;
    cout<<"\n\n\n Situação Final.:"<<situacaoasb;
    cout<<"\n\n\n\n----------------------------------------------";
    cout<<"\n FIM DO PROGRAMA !!";

    return 0;
}