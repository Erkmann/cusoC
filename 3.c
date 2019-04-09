#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    int dias, horas, minutos, segundos;

    scanf("%d", &dias);
    scanf("%d", &horas);
    scanf("%d", &minutos);
    scanf("%d", &segundos);

    int dias_segundos = dias * 24 * 60 * 60;
    int horas_segundos = horas * 60 * 60;
    int minutos_segundos = minutos * 60;
    int total = dias_segundos + horas_segundos + minutos_segundos + segundos;

    printf("O total de segundos em %d dias, %d horas, %d minutos e %d segundos eh %d segundos", dias, horas, minutos, segundos, total);

}
