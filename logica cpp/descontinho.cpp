#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main(){
    char nomeasb[20];
    char produtoasb[20];
    float precoasb;
    int quantasb;
    float totalasb;
    float descasb;
    float totalliqasb;
    
    setlocale(LC_ALL, "Portuguese");

    system("cls");
    cout<<"\n----------------------------------------------------";
    cout<<"\n                 SISTEMA DESCONTOS                  ";
    cout<<"\n----------------------------------------------------";
    cout<<"\n Nome do Cliente......:";
    cin>>nomeasb;
    cout<<"\n Produto..............:";
    cin>>produtoasb;
    cout<<"\n Preço Unitário.......:";
    cin>>precoasb;
    cout<<"\n Quantidade...........:";
    cin>>quantasb;
    cout<<"\n----------------------------------------------------";
    cout<<"\n TECLE ENTER PARA GERAR NOTA FISCAL \n";
    system("pause");

    totalasb=precoasb*quantasb;

    if (totalasb<=10) {
        descasb=0.05*totalasb;
    }
        else {
            if (totalasb<=50) {
                descasb=0.10*totalasb;
            } else {descasb=0.20*totalasb;}
        };
    
    totalliqasb=totalasb-descasb;

    system("cls");
    cout<<"\n----------------------------------------------------";
    cout<<"\n                 SISTEMA DESCONTOS                  ";
    cout<<"\n----------------------------------------------------";
    cout<<"\n Cliente......:"<<nomeasb;
    cout<<"\n Total........:"<<totalasb;
    cout<<"\n Desconto.....:"<<descasb;
    cout<<"\n Total Líquido:"<<totalliqasb;
    cout<<"\n----------------------------------------------------";
    cout<<"\n FIM DE PROCESSAMENTO !!";

    return 0;
}