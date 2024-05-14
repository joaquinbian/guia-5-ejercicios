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
    
    int num, prevNum;

    string a = " ";

    for(int i = 0; i < 5; i++){
        cout << "Complete el grupo " << i + 1 << endl;

        //cargamos el numero solo para la primera vuelta
        if(i == 0){
            cout << "Ingrese numero: "; 
            cin >> num;
        }

        prevNum = num;

        while(num >= prevNum){

            



            cout << "Ingrese numero: ";
            cin >> num;
            //solo vamos a actualizar el numero anterior en caso de que sea mayor
            if(num >= prevNum){
                prevNum = num;
            }

        }

        
       cout << "Numeros del grupo " << i + 1 << " " << a << endl;
        a = "";
        
    }
    return 0;
}