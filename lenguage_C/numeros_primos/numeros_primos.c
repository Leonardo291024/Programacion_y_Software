/*
El primer programa (Números Primos) deberá imprimir (mostrar en pantalla) lo
siguiente: “Ingresa un número”, que representará el número ingresado. Si se trata
de un número primo, se deberá mostrar: “Este número es primo”. En caso
contrario, se mostrará: “Este número no es primo” . 
*/

#include<stdio.h>
//#include <stdbool.h>

int main(){
    int numero;

    printf("Ingresa un valor \n");
    scanf("%i" ,&numero);

    if(numero % 2 != 0)
        printf("El numero %i es primo ", numero);
    else
        printf("El numero %i no es primo ", numero);
    


    return 0;
}