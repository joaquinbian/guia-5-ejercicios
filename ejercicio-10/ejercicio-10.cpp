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

    int num, posNum = 0;

    //variables A
    int group = 0, zeroCounter = 0, restPrimeCounter = 0, primeConsecuitives = 0, groupsFourPrimeConsecutives = 0;

    //variables B
    int maxNeg = 0, secMaxNeg = 0, posMaxNeg, posSecMaxNeg, posAux,  auxNeg;

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
        //incrementamos los grupos en 1
        group++;
        while(num != 0){
            
            posNum++;
            //si antes se ingreso un 0, se resetea el contador
            if(zeroCounter > 0){
                zeroCounter = 0;
            }


            restPrimeCounter = 0;
            //punto A
            for(int i = num - 1; i > 1; i--){

                if(num % i == 0){
                    restPrimeCounter++;
                }

                
            }
            if(restPrimeCounter == 0){
                cout << "se detecto un primo " << num << endl;  
                primeConsecuitives++;
            }
             if(primeConsecuitives == 4){
                groupsFourPrimeConsecutives++;
            }


            //punto B
            if(num < 0){
                if(maxNeg == 0){
                    maxNeg = num;
                    posMaxNeg = posNum;
                } else if(num > maxNeg){
                    auxNeg = maxNeg;
                    maxNeg = num;
                    secMaxNeg = auxNeg;
                    
                } else if(num > secMaxNeg){
                    secMaxNeg = num;
                }
            }

            cout << "El numero ingresado es " << num << endl;

            cout << "Numero: " ;
            cin >> num;      
        }


        //mostramos punto B
        if(maxNeg != 0){
            cout << "--------- B ---------" << endl;
            cout << "Para el grupo " << group << ":" << endl;
            cout << "Mayor numero negativo: " << maxNeg << endl;
            cout << "Segundo mayor numero negativo: " << secMaxNeg << endl;
            cout << "Posicion: " << posNum << endl;

        } else {
            cout << "--------- B ---------" << endl;
            cout << "NO se encontraron numeros negativos en el grupo " << group << endl;
        }
        posNum = 0;
        maxNeg = 0;
        secMaxNeg = 0;
        auxNeg = 0;



        if(num == 0){
            zeroCounter++;
        }
    }

    cout << "--------- A ---------" << endl;    
    cout << "La cantidad de grupos donde se ingresaron 4 numeros primos es " << groupsFourPrimeConsecutives << endl;


    return 0;
}