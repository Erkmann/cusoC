#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    float metros;

    scanf("%f", &metros);

    printf("%.2f m em milimetros eh %.0f mm", metros, metros * 1000);

}
