#include <iostream>


using namespace std;


/*

Dada una lista de números compuesta por grupos donde cada grupo está separado del siguiente por un cero, 
y la lista de números finaliza cuando se ingresan dos ceros consecutivos, se pide determinar e informar:

a) La cantidad de grupos en los que se detecten un total de 4 o más números primos consecutivos. Se informa 1 resultado al final.

b) Para cada uno de los grupos en los que se haya detectado números negativos, el mayor y el segundo mayor de los mismos 
y en qué posición estaban dentro del subgrupo. En los grupos sin negativos, informar “Grupo sin negativos”. Se informan 4 resultados por cada grupo. 

c) El mayor número primo de todos los grupos, informando además en cual grupo y en qué posición del mismo fue detectado.  Se informan 3 resultados al final.

Ejemplo de una posible lista: 5, 4, 3, 0, 18, -5, 20, 0, 7, 11, 25, 4, 0, 0.



 */

int main(){

    int group = 1, zeroCounter = 0, restPrimeCounter = 0, primeConsecuitives = 0, groupsFourPrimeConsecutives = 0, num;

    bool prevNumWasPrime = false;
    

    cout << "Ingresa tantos numeros como quieras " << endl;

    cout << endl;

    cout << endl;

    cout << "- Ingresa el numero 0 para cambiar de grupo de numeros " << endl;
    cout << "- Ingresa el numero 0 2 veces consecutivas para finalizar el programa " << endl;


 
        
    while(zeroCounter <  2){
        cout << "Numero: ";
        cin >> num; 

        if(primeConsecuitives > 0){
            primeConsecuitives = 0;
        }

        while(num != 0){
            
            //si antes se ingreso un 0, se resetea el contador
            if(zeroCounter > 0){
                zeroCounter = 0;
            }

            //punto A
            for(int i = num - 1; i > 1; i--){
                cout << num << " En el for" << endl;

                if(num % i == 0){
                    restPrimeCounter++;
                }

                if(restPrimeCounter > 2){
                    break;
                }
            }

            if(restPrimeCounter < 2){
                primeConsecuitives++;
                restPrimeCounter = 0;
            } else if(primeConsecuitives == 4){
                groupsFourPrimeConsecutives++;
            }




            cout << "El numero ingresado es " << num << endl;

            cout << "Numero: " ;
            cin >> num;      
        }

        if(num == 0){
            zeroCounter++;
        }
    }



    return 0;
}