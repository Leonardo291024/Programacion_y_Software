/*
El tercer programa (Números Invertidos) deberá ingresar un número de 4 dígitos.
Después, se debe mostrar lo siguiente: <<“El número al revés es: “número
invertido”>>
 */

#include<stdio.h>

int main(){

    int numero, inverso = 0;

    printf("Ingresa un valor \n");
    scanf("%i" ,&numero);

    while (numero != 0){
        int digito = numero % 10;
        inverso = inverso * 10 + digito;
        numero /= 10;
    }

    printf("El numero invertido es: %i\n", inverso);
    


    return 0;
}