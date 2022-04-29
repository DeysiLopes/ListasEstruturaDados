/*Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório dos números de 1 a N.*/

#include <stdio.h>

soma(int n){
    if(n == 0){
        return 0;
    }
    return n + soma(n-1);
}

int main(){

    int num, resul;

    printf("Digite um valor positivo para n\n");
    scanf("%d", &num);

    resul = soma(num);
    printf("O resulta do somatório é %d \n", resul);

}
