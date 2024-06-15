
#include <iostream>

using namespace std;




/*

Hacer un programa para ingresar los valores de los pesos de distintas encomiendas que se deben enviar a distintos clientes 
y que finaliza cuando se ingresa un peso negativo. 
Se deben agrupar las encomiendas en camiones que pueden transportar hasta 200 kilos en total.

Ejemplo: 10, 20, 140,   70, 100,   40, 10, 50, 80,   90, 30, 40,   50, -10
Camión:      1             2             3              4              5                      

Se pide determinar e informar:
a) El número de cada camión y peso total de encomiendas. Camión 1: 170 kg, Camión 2: 170 kg, etc. 
b) El número de camión que transporta mayor cantidad de encomiendas. En el ejemplo anterior sería el Camión 3 con 4 encomiendas.


*/

int main(){

   int peso = 0, pesoAct = 0, numCamion = 1, sumPeso = 0;
   const int PESO_MAX = 200;


   cout << "Ingrese el peso de la encomienda " << endl;
   cout << "El programa finalizara al ingresar un numero negativo" << endl;


   cout << "Peso: ";
   cin >> peso;

   while(peso >= 0){
      

      sumPeso += peso;
      while(sumPeso <= PESO_MAX && peso >= 0){
         cout << "El peso ingresado es " << peso << endl << endl;
         cout << "El camion es " << numCamion << endl << endl;
         cout << "El peso actual es " << sumPeso << endl << endl;

         cout << "Peso: ";
         cin >> peso;

         sumPeso += peso;
         
      }

      numCamion++;
      sumPeso = 0;

   }


   return 0; 
}