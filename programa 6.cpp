/******************************************************************************

Programa numeros divisibles
Author: Todos de clase
Fecha:17/04/2021

*******************************************************************************/
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int numero1, numero2;
    
    cout <<"Ingrese el primer número: ";
    cin >>numero1;
    cout <<"Ingrese el segundo número: ";
    cin >>numero2;
    
    if(numero1 != 0 and numero2 != 0){
        if(numero1 >= numero2){
            if(numero1 % numero2 == 0){
                printf(" \n \t %d es divisible por %d \n\t El resultado de la division es %d",numero1,numero2,numero1/numero2);
            }
            else
            {
                printf(" \n \t %d**********No es divisible por %d \n\t",numero1,numero2);
            }
        }
        else
        {
            if(numero2 % numero1 == 0)
            {
                printf(" \n \t %d es divisible por %d \n\t El resultado de la division es %d",numero2,numero1,numero2/numero1);
            }
            else
            {
                printf(" \n \t %d**********No es divisible por %d \n\t El resultado de la division es %d",numero2,numero1);
            }
        }
    }
    else
    {
        cout <<"********* la division por cero es indeterminada"<<char(7);
    }
    return 0;
}

