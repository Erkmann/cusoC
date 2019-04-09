#include <stdio.h>
#include <stdlib.h>

void main(){

    //defininndo variaveis
    int a = 5, opcao = 1;
    float b = 2.5;
    char c = 'x';

    //Condicional simples
    if(a == 5){
        printf("A variavel a eh igual a 5");
    }

    if(b == 2.5){
        printf("A variavel b eh igual a 2.5");
    }

    if(c == 'x'){
        printf("A variavel c eh igual a x");
    }

    //Impar ou par
    if (a % 2 == 0){
        printf("\nA variavel eh par\n");
    }else{
        printf("\nA variavel eh impar\n");
    }

    //Else If

    if(opcao == 1){
        printf("\nA opcao = 1");
    }else if(opcao == 2){
        printf("\nAopcao = 2");
    }else{
        printf("\nA opcao nao eh nem 1 nem 2");
    }

}
