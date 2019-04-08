#include <stdio.h>
#include <stdlib.h>

void main(){

    //Definindo uma variavel
    int a = 5, b;

    //%d para imprimir inteiro

    //Imprimindo a variavel "a"
    printf("%d", a);

    //Contcatenando
    printf("O valor da var a eh: %d", a);

    //Mudando valor de a
    a = 15;

    //Contcatenando
    printf("O valor da var a eh: %d", a);

    //lendo valores - pegando do teclado
    scanf("%d", &b);

    //Contcatenando
    printf("O valor da var b eh: %d", b);

    //Pula linha
    printf("\n");

    //Imprimindo
    printf("\nAlow\n");

    //Pausando
    system("pause");
}
