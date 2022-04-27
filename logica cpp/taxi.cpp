#include<iostream>
#include<locale.h>
#include<string>

using namespace std;

main(){ 
    string nomeasb;
    string tipoasb;
    float kmasb;
    int horaasb;
    int bandeiraasb;
    float kmcalcasb;
    float vcorridaasb;
    string respasb;
    
    setlocale(LC_ALL,"Portuguese");
    
    do{ 
        system ("cls");
        cout<<"\n-------------------------------";
        cout<<"\n        Serviço de Taxi        ";
        cout<<"\n-------------------------------";
        cout<<"\n\n Cliente...................: ";
        cin>>nomeasb;
        cout<<"\n\n Tipo de serviço..........: ";
        cin>>tipoasb;
        cout<<"\n\n Quilometragem.............: ";
        cin>>kmasb;
        cout<<"\n\n Horario do Serviço........: ";
        cin>>horaasb;

        if (kmasb>100) {
            kmcalcasb=2*kmasb;
            }else {
                kmcalcasb=kmasb;
                };

        if ((horaasb>=6) & (horaasb<=22)) {
            bandeiraasb=1;
            vcorridaasb=7+1.40*kmcalcasb;
            } else {bandeiraasb=2;
                vcorridaasb=10+1.55*kmcalcasb;
                };

        if (tipoasb=="p") {
            vcorridaasb=vcorridaasb*1.15;
            } else {
                vcorridaasb=vcorridaasb;
                };

        cout<<"\n-------------------------------";
        cout<<"\n\n Bandeira................: "<<bandeiraasb;
        cout<<"\n\n Quilometragem calculada.: "<<kmcalcasb;   
        cout<<"\n\n Valor Total da Corrida..: R$ "<<vcorridaasb;
        cout<<"\n-------------------------------";
        cout<<"\n Mensagem: Tecle S para nova consulta: ";
        cin>>respasb;
		}
    while(respasb=="S");
    cout<<"\n\n FIM DE PROGRAMA!!!";
    return 0;
    
}
