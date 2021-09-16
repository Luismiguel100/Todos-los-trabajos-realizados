/******************************************************************************
 
Inicio de un negocio
Desarrollado online
Autor: Todos
Fecha: Abril 10/2021

*******************************************************************************/
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    float total,hipoteca,inversion;
    cout <<"Ingrese el el monto total del negocio --->";
    cin >>total;
    cout <<"Ingrese monto de la hipoteca          --->";
    cin >>hipoteca;
    if(hipoteca < 1000000) 
    {  inversion == total * .50
       cout <<"50% de la inversion de cada socio es: $", inversion
    else 
       if (hipoteca < total) entonces
       {inversion == (total - hipoteca)/ 2
           cout <<"Inversion total de la hipoteca es: $", hipoteca;
           cout <<"Inversion que corresponde a cada socio es: $", inversion;
        else
           cout<<"Reconcidera la inversion"
       }
    }
    return 0;
}


