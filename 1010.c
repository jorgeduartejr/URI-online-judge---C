#include <stdio.h>

int main (){
    int cod1,unit1,cod2,unit2;
    float valor1, valor2, valortotal;

    scanf("%d""%d""%f", &cod1, &unit1, &valor1 );
    scanf("%d""%d""%f", &cod2, &unit2, &valor2 );

    
    valortotal = (unit1*valor1) + (unit2*valor2);
    printf("VALOR A PAGAR: R$ %.2f\n", valortotal);

    

}