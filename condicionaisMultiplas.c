#include <stdio.h>
#include <stdlib.h>

void main(){

    int a = 10;

    // E

    if(a > 5  && a < 13){
        printf("\n A variavel 'a' esta entre 5 e 15");
    }

    //Ou

    if(a > 5 || a > 15){
        printf("\n A variavel 'a' eh maior que 15 ou 5");
    }

    //Both

    if((a > 5 && a < 15) || a == 20){
        printf("\n A variavel 'a' esta entre 5 e 15 ou vale 20");
    }

}
