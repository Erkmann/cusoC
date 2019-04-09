#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){

    //definindo variaveis
    int a ;
    float b;
    char c;
    bool d;

    //Passando Valores
    a = 5;
    b = 2.3;
    c = 'a';
    d = true;

    //Escrevendo na tela
    printf("\n O valor de a = %d \n", a);

    //%f para exibir float
    //$".2 - .3 -.1 - definir quantidade casas depois da virgula
    //%c pra exibir char
    printf("\n O valor de b = %.2f \n", b);
    printf("\n O valor de c = %c \n", c);
    printf("\n O valor de d = %d \n", d);

    //Lendo Valores
    //Pra ler char, tem q ter o espaço antes
    //Para ler booleano, faz como se fosse inteiro
    scanf("%d", &a);
    scanf("%f", &b);
    scanf(" %c", &c);
    scanf("%d", &d);

    //Exibindo denovo
    printf("\n%d", a);
    printf("\n%.2f", b);
    printf("\n%c ", c);
    printf("\n%d ", d);

    //Pausado
    //system("pause");

}
