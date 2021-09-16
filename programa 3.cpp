/******************************************************************************
Tres lados forman un triangulo
Desarrollado online
Autor: Todos
Fecha: Abril 13/2021
*******************************************************************************/
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    float lado1,lado2,lado3;
    cout<<"Escriba ingrese lado 1 --->  ";
    cin>>lado1;
    cout<<"Escriba ingrese lado 2 --->  ";
    cin>>lado2;
    cout<<"Escriba ingrese lado 3 --->  ";
    cin>>lado3;
    if ((lado1 <= 0) or (lado2 <= 0) or (lado3 <= 0))
        {
            cout<<"\n\n DIGITE UN NUMERO MAYOR QUE CERO";
            return 0;
        }
        else
        {
        if((lado1 < (lado2 + lado3)) or (lado2 < (lado1 + lado3)) or (lado3 < (lado2 + lado1)))
        {   
            cout<<"\n SI FORMAN UN TRIANGULO";
        }
            if((lado1 == lado2) and (lado2 == lado3) and (lado1 == lado3))
                {
                    cout<<"\n FORMAN UN TRIANGULO EQUILATERO";
                }
                else
                {
                    if((lado1 == lado2) or (lado2 == lado3) or (lado1 == lado3))
                    {
                        cout<<"\n FORMAN UN TRIANGULO ISOCELES";
                    }
                    else
                    {
                        cout<<"\n FORMAN UN TRIANGULO ESCALENO";
                    }
                }
            }    
        return 0;
        }
        
        
        


