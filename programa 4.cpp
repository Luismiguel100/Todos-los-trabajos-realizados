/******************************************************************************

Programa que calcula si la persona es mayor de edad
Desarrollado online
Author: Luis Miguel Arcila Guzmán
Fecha: Marzo 27/2021

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <math.h>

 using namespace std;

int main()
{  
   int anoActual,anoNacimiento,edad;
   cout<<"Ingrese año de nacimiento    --->";
   cin>> anoNacimiento;
   if(anoNacimiento < 1920)
   {   cout<<"\n\n ERROR";
   }
   else
   {
       cout<<"Ingrese año actual       --->";
       cin>> anoActual;
   
        if(anoActual < anoNacimiento)
        {
            cout<<"\n ERROR";
        }    
   
        else
        {
            edad=(anoActual - anoNacimiento);
            if(edad >= 18)
            {
                cout<<"\n MAYOR DE EDAD";
            }
        }
   }
    return 0;
}


