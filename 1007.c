#include <stdio.h>

int main (){
    int a,b,c,d, prod; 
    scanf("%i", &a);
    fflush(stdin);
    scanf("%i", &b);
    fflush(stdin);
    scanf("%i", &c);
    fflush(stdin);
    scanf("%i", &d);
    prod = (a * b - c * d);
    printf("DIFERENÇA = %i\n", prod);


    return 0;    
}