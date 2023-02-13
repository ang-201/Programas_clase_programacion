/*

Author: Angel Reyes
date: 11/02/23
Description: Documentacion about type of dates in c
Param: <opcion>  

*/

#include<stdio.h>
#include<complex.h>
#include<stdbool.h>

int opcion;

void documentacion(){

printf("Documentación de los tipos de datos en C\n");

printf("\nMenú:\n");
printf("\n1-Enteros\n");
printf("\n2-Flotantes\n");
printf("\n3-Complejos\n");
printf("\n4-Cadenas\n");
printf("\n5-Bytes\n");
printf("\nDigite la letra de la opción deseada:");scanf("%i",&opcion);

//hile (opcion >0 || opcion<=5 || opcion >5){
switch (opcion){

    case 1:
        printf("Los enteros (int) son un tipo de dato numérico que abarca el conjunto de numeros enteros");
        printf("Ejemplos: 2, 4, 6 ,7 ,35 55");
        break;

    case 2:
        printf("Los flotantes (float) son un tipo de dato numérico que abarca el conjunto de numeros decimales");
        printf("Ejemplos:3.5, 6.8, 0.9, 1.3, 3.1416");
        break;
    
    case 3:
        printf("Numeros compuestos por una parte real y una parte imaginaria");
        printf("Ejemplo:9i");
        break;

    
    case 4:
        printf("Tipo de dato no numerico que consta de la asociación de varios caracteres (strings)");
        printf("Ejemplos: 'Angel', 'Hola','México', 'UNAM' ");
        break;

        
    case 5:
        printf("El tipo de dato byte representa un numero entero sin signo  cualquiera  del rango 0-255 , sin embargo en C no forma parte de los datos primitivos,para representar un byte se debe emplear la palabra reservada unsigned char ");
        break;
    
    default:
            
        printf("Opción invalida, favor de indicar una opción valida");
        printf("\nMenú:\n");
        printf("\n1-Enteros\n");
        printf("\n2-Flotantes\n");
        printf("\n3-Complejos\n");
        printf("\n4-Cadenas\n");
        printf("\n5-Bytes\n");
        printf("\nDigite la letra de la opción deseada:");scanf("%i",&opcion);
           
            
    }
    
    
}


int main(){

    documentacion();
    return 0;
}