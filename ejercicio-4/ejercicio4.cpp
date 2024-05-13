#include <iostream>

using namespace std;

/*

Dada una lista de números compuesta por 10 grupos y cada grupo separado del siguiente por un cero, se pide determinar e informar:

a) Para cada uno de los grupos el máximo de los números pares y el máximo de los números impares. Se informan 2 resultados por cada grupo.
b) Para cada uno de los grupos el porcentaje de números negativos y números positivos. Se informan 2 resultados por cada grupo.
c) Cuántos números positivos había en total entre los 10 grupos. Se informa 1 resultado al final.


*/


int main(){

    //numero que ingresa el usuario
    int num;

    int maxPar, maxImpar, countPos, countNeg, totalPos = 0;

    for(int i = 0; i < 10; i++){

      cout << endl;
      cout << "Ingresa un numero diferente de 0 para agregarlo al GRUPO " << i + 1 <<  endl;
      cout << "Para cambiar de grupo, ingrese 0 " << endl;
      
      cin >> num;

      while(num != 0){

        //calculamos el punto A
        if((num % 2) == 0){
            if(maxPar == 0 || num > maxPar){
                maxPar = num;
            }
        } else {
            if(maxImpar == 0 || num > maxImpar){
                maxImpar = num;
            }
        }

        //calculamos el punto b
        if(num > 0){
            countPos++;
        } else {
            countNeg++;
        }

      
        cin >> num;
      }
        
        cout << endl;
        cout << "**** GRUPO " << i + 1 << " ****" << endl;
        cout << "Maximo par -> " << maxPar << endl;
        cout << "Maximo impar -> " << maxImpar << endl;
        
        int totalNums = countPos + countNeg;

        cout << "Porcentaje positivos -> " << (countPos * 100) / totalNums << "%" << endl; 
        cout << "Porcentaje negativos -> " << (countNeg * 100) / totalNums << "%" << endl; 

        //calculamos el punto C
        totalPos += countPos; 

        maxPar = 0;
        maxImpar = 0;
        countNeg = 0;
        countPos = 0;
    }

    cout << "Total de positivos " << totalPos << endl;

    return 0;
}
