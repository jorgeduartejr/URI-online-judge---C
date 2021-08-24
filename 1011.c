#include <stdio.h>

int main (){
    double raio;
    float volume;
    scanf("%lf", &raio);
    volume = 3.14159 * raio * raio * raio * (4/3.0);
    printf("VOLUME = %.3lf\n", volume);


    return 0;
}