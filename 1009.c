#include <stdio.h>

int main (){
    char nome[30];
    double salario;
    double totvendas;
    
    double extra;
    double totsalario;

    scaf("%s", nome);
    fflush(stdin);
    scanf("%lf", &salario);
    fflush(stdin);
    scanf("%lf", &totvendas);

    extra =  0.15 * totvendas;
    totsalario = salario + extra;

    printf("TOTAL = R$ %.2f\n", totsalario);




    return 0;


}