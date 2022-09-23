#include <Bidon.h>

int main()
{
    int batido,vaso;
    float v_vaso[3]={0.15,0.2,0.3};
    Bidon bidones[3]=
    {
        Bidon("Banana", 20),
        Bidon("Anana",35),
        Bidon("Sandia",44)};

    cout<<"Ingrese codigo de batido(1- Banana, 2- Anana y 3 - Sandia): ";
    cin>>batido;
    while(batido!=0){
        cout<<"Ingrese tipo de vaso(1-  150 ml, 2- 200ml, 3- 300ml): ";
        cin>>vaso;

        bidones[batido-1].extraer(v_vaso[vaso-1]);

        cout<<endl<<"=================="<<endl<<endl;
        cout<<"Ingrese codigo de batido(1- Banana, 2- Anana y 3 - Sandia): ";
        cin>>batido;
    }

    cout<<endl<<"======================="<<endl<<endl;
    for(int i=0;i<3;i++)
    {
    cout<<"Al bidon de "<<bidones[i].getNombre()<<" le quedan "<<bidones[i].getLitros()<<" LITROS."<<endl;
    }


    return 0;

}




/* Bidon banana("Banana", 20);
    cout<<banana.getLitros();
    banana.extraer(4);
    cout<<endl<<banana.getLitros();*/
