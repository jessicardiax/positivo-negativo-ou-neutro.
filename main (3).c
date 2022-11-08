//. Crie uma função, sem retorno, que recebe um valor inteiro por parâmetro e informa
//se ele é positivo, negativo ou neutro.
#include <stdio.h>
 int main(){
    int n, negativo, positivo,neutro;
    printf("digite um numero:");
    scanf("%d",&n);
    if (n<=0){
        printf("O numero é negativo:");
    }
   else if  (n>=0){
        printf("O numero é positivo");
    }
    else{
        printf("o numero é neutro");
    }
    return 0;
 }
   