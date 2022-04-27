#include <iostream>
#include <locale.h>
#include <string>
#include <math.h>

using namespace std;

main (){
    string prodasb;
    float precoasb;
    int quantasb;
    float totalpasb;
    float totalcasb;
    float descasb;
    float totalliqasb;
    string respasb;

    setlocale(LC_ALL, "Portuguese");
    cout.precision(2);
    cout<<fixed;

    do{
        system("cls");
        cout<<"\n----------------------------------------------------";
        cout<<"\n      SISTEMA COMPRA E VENDA - TELA ENTRADA         ";
        cout<<"\n----------------------------------------------------";
        cout<<"\n\n Produto.........: " ;
        cin>>prodasb;
        cout<<"\n\n Preço Unitário..: " ;
        cin>>precoasb;
        cout<<"\n\n Quantidade......: " ;
        cin>>quantasb;
        cout<<"\n----------------------------------------------------";

        totalpasb=precoasb*quantasb;
        totalcasb=totalcasb+totalpasb;

        cout<<"\n\n Total Parcial...: R$ "<<totalpasb;
        cout<<"\n\n Total da Compra.: R$ "<<totalcasb;
        cout<<"\n----------------------------------------------------";
        cout<<"\n\n Outro Produto < S / N > ? ";
        cin>>respasb;
    }
    while (respasb == "S");

    if (totalcasb<100) {
        descasb=totalcasb*0.10;} else{
            descasb=totalcasb*0.20;
        };
    totalliqasb=totalcasb-descasb;

    system("cls");
    cout<<"\n----------------------------------------------------";
    cout<<"\n       SISTEMA COMPRA E VENDA - TELA SAÍDA          ";
    cout<<"\n----------------------------------------------------";
    cout<<"\n\n Total da Compra..: R$ "<<totalcasb;
    cout<<"\n----------------------------------------------------";
    cout<<"\n\n Desconto.........: R$ "<<descasb;
    cout<<"\n----------------------------------------------------";
    cout<<"\n\n Total Líquido....: R$ "<<totalcasb;
    cout<<"\n FIM DE PROGRAMA !!! ";
    return 0;

}
