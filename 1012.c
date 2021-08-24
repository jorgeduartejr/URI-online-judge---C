#include <stdio.h>
 
int main() {
    double A,B,C;
    double areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo;
    double pi = 3.14159;
    scanf("%lf""%lf""%lf", &A,&B,&C);

    areaTriangulo = (A * C)/2;
    areaCirculo = C * C * pi;
    areaTrapezio = ((A + B) * C)/2;
    areaQuadrado = B * B;
    areaRetangulo = A * B;

    printf("TRIANGULO: %.3lf\n", areaTriangulo);
    printf("CIRCULO: %.3lf\n",areaCirculo);
    printf("TRAPEZIO: %.3lf\n",areaTrapezio);
    printf("QUADRADO: %.3lf\n", areaQuadrado);
    printf("RETANGULO: %.3lf\n", areaRetangulo);






    
    return 0;
}