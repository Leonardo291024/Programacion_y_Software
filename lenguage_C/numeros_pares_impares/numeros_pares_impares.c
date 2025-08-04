/*
El segundo programa (Números Pares e Impares) deberá pedir que se ingrese un
número. Si el número ingresado resulta ser un par, se deberá mostrar lo siguiente:
“Este número es par”. En caso contrario: “Este número es impar”. 
*/

#include<stdio.h>

int main(){
    int numeros[10] = {5,3,96,7,3,4,5,8,6,10};
    int i;

    for(i = 0; i < 10; i++){
        if(numeros[i] %2 == 0){
            printf("El numero %d es PAR \n", numeros[i]);
        }else{
             printf("El numero %d es IMPAR \n", numeros[i]);
        }
    }

    //printf("\n");

    return 0;
}