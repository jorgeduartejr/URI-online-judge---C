#include <stdio.h>

int main(){
    int tempo, velMedia;
    float gasto;
    scanf("%d",&tempo);
    scanf("%d",&velMedia);

    gasto = (float)(tempo * velMedia)/12;
    printf("%.3f\n",gasto);


    return 0;
}