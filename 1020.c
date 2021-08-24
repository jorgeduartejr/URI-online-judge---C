#include <stdio.h>

int main(){
    int num;
    int meses, dias, anos;
    scanf("%d", &num);
    anos = (num / 365);
    meses = (num % 365)/30;
    dias = (num % 365)%30;
    
    
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
    
    return 0;
}