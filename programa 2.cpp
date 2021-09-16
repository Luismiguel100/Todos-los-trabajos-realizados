/******************************************************************************

Programa que calcula distancia entre dos puntos
Desarrollado online 
Autho:Todos
Fecha:Marzo 20/2021

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <math.h>

 using namespace std;
 
int main()
{ float x1,y1,x2,y2;
  float distancia;
  cout << "Ingrese cordenada x1 ---> ";
  cin >> x1;
  cout << "Ingrese cordenada y1               ---> ";
  cin >> y1;
  cout << "Ingrese cordenada x2 --->";
  cin >> x2;
  cout << "Ingrese cordenada y2               --->";
  cin >> y2;
  distancia= sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
  cout << "la distancia entre los dos puntos es: " << distancia;
    
    return 0;
}

