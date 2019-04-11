#include <stdio.h>
#include <stdlib.h>

void main(){

    int a = 5, b = 10, c = 15;
    char d = 'x';

    if(a > 2){
        printf("\n %d eh maior que 2", a);
    }

    if(c >= b){
        printf("\n %d eh maior que %d", c, b);
    }

    if(a < 10){
        printf("\n %d eh menor que 10", a);
    }

    if(c != 10){
        printf("\n %d eh diferente de 10", c);
    }

    if(d != 'a'){
        printf("\n %c eh diferente de a", d);
    }

}
