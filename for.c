#include <stdio.h>
#include <stdlib.h>

void main(){

    int i;

    for(i = 1; i <= 10; i++){
        printf("\n 5 X %d = %d", i, 5 * i);
    }

    for(i = 1; i <= 10; i = i + 2){
        printf("\n %d", i);
    }

    for(i = 10; i >= 1; i--){
        printf("\n %d", i);
    }

}
