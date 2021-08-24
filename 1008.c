#include <stdio.h>

int main (){
    int num1;
    int num2;
    float num3;
    float salario;
    scanf("%i", &num1);
    scanf("%i", &num2);
    scanf("%f", &num3);
    salario = num2 * num3;
    
    printf("NUMBER = %i\n", num1);
    printf("SALARY = U$ %.2f\n", salario);


    return 0;

    


}