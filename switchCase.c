#include <stdio.h>
#include <stdlib.h>

void main(){

    int a = 5;
    char b = 'x';

    if(a = 5){
        printf("\nOpcao 1");
    }else if(a == 10){
        printf("\nOpcao 2");
    }else if(a == 15){
        printf("\nOpcao 3");
    }else{
        printf("\nOpcao invalida");
    }

    switch(a){
        case 5:
            printf("\nOpcao 1");
            break;
         case 10:
            printf("\nOpcao 2");
            break;
         case 15:
            printf("\nOpcao 3");
            break;
        default:
            printf("\nOpcao invalida");
            break;
    }

    switch(b){
        case 'x':
            printf("\n A letra eh x");
            break;
        default:
            printf("Opcao invalida");
    }

}
