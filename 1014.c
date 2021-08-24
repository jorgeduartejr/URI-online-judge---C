#include <stdio.h>

int main(){
    int distancia;
    float combstot, kmtotal;
    scanf("%d", &distancia);
    scanf("%f",&combstot);
    kmtotal = distancia/combstot;
    printf("%.3f km/l\n",kmtotal);

    return 0;

}