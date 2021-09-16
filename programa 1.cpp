/******************************************************************************

Programa que calcula la velocidad de un móvil
Desarrollado online
Autho: Todos
Fecha: MArzo 20/2021

*******************************************************************************/
#include <stdio.h>
#include<iostream>

using namespace std;

int main()
{ float tiempo,distancia;
  float velocidad;
  cout << "Ingrese distancia recorrida ---> ";
  cin >> distancia;
  cout << "Ingrese tiempo              ---> ";
  cin >> tiempo;
  
  velocidad = distancia / tiempo;
  cout << "La velocidad del móvil es   ---> " << velocidad << "Km/H";
  

    return 0;
}
