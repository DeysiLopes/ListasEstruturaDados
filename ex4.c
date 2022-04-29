/*Crie um programa em C, que contenha uma função recursiva
que receba dois inteiros positivos k e n e calcule kn. Utilize
apenas multiplicações. O programa principal deve solicitar ao
usuário os valores de k e n e imprimir o resultado da chamada
da função.*/

#include <stdio.h>

mult(int k, int n){
    if (n == 0){
        return 1;
    }
    return k * mult(k,(n-1));
    
}

int main(){
    int k, n, resul;

    printf("Digite o valor de k\n");
    scanf("%d",&k);
    printf("Digite o valor de n\n");
    scanf("%d",&n);

    resul = mult(k,n);
    printf("O resultado é %d ",resul);
}