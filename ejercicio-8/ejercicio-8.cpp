#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;


/*

Hacer un programa para ingresar por teclado 5 grupos compuestos por números ordenados de menor a mayor. 
El final de cada grupo se detecta al ingresar un número menor a su anterior. 
Se debe obtener y emitir:
a) Para cada uno de los grupos la cantidad de números primos que lo componen. Se informa 1 resultado por cada grupo.
b) El menor número par de cada uno de los grupos. Se informa 1 resultado por cada grupo.
c) El anteúltimo y último número positivo de cada uno de los grupos. Se informan 2 resultados por cada grupo.

Ejemplo de cómo se conforman los grupos:
-20, -5, 8,  2, 20, 35, 42,   12, 22, 23,   7, 12, 18, 23, 80,   12, 24, 36, -5
Grupo 1          Grupo 2       Grupo 3        Grupo 4        Grupo 5


*/

int main(){
    
    //variables que manejamos los numeros
    int num, prevNum;


    int cantPrimos, prevPositiveNumber, lastPositiveNumber, aux = 0;
    int numPar = 1;
    bool isPrime;


    for(int i = 0; i < 5; i++){
        cout << "Complete el grupo " << i + 1 << endl;

        //cargamos el numero solo para la primera vuelta
        if(i == 0){
            cout << "Ingrese numero: "; 
            cin >> num;
        }

        prevNum = num;

        while(num >= prevNum){
            isPrime = true;
            //calculamos el punto A
            for(int i = num - 1; i > 1; i--){
                if(num > 1){
                    if((num % i == 0)){
                        isPrime = false;
                    }
                }
            }
            //si isPrime todavia es verdadero, es pq es primo
            if(num > 1 && isPrime){
                cantPrimos++;
            }

            //punto B
            if((numPar == 1 || num < numPar) && num % 2 == 0){
                numPar = num;
            }


            //punto C
            if(num > 0){
                aux = lastPositiveNumber;
                lastPositiveNumber = num;
                prevPositiveNumber = aux;
            }


            cout << "Ingrese numero: ";
            cin >> num;
            //solo vamos a actualizar el numero anterior en caso de que sea mayor
            if(num >= prevNum){
                prevNum = num;
            }

        }

        cout << "La cantidad de numeros primos del grupo " << i + 1 << " es " << cantPrimos << endl;
        cout << "El menor numero par es " << numPar << endl;

        if(prevPositiveNumber != 0){
            cout << "El anteultimo numero positivo del grupo es " << prevPositiveNumber << endl; 
        }

        cout << "El ultimo numero positivo del grupo es " << lastPositiveNumber << endl; 
        cantPrimos = 0; 
        numPar = 1;
        prevPositiveNumber = 0;
        lastPositiveNumber = 0;
        
        
    }
    return 0;
}
