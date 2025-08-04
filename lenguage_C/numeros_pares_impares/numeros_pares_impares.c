/*
El segundo programa (Números Pares e Impares) deberá pedir que se ingrese un
número. Si el número ingresado resulta ser un par, se deberá mostrar lo siguiente:
“Este número es par”. En caso contrario: “Este número es impar”. 
*/

#include<stdio.h>

int main(){
    int numero;

    printf("Digita un valor: ");
    scanf("%i", &numero);
   
    if(numero %2 == 0){
        printf("El numero %i es PAR \n", numero);
    }else{
        printf("El numero %i es IMPAR \n", numero);
    }

    return 0;
}