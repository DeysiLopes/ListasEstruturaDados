/*Faça uma função recursiva que permita somar os elementos de
um vetor de inteiros.*/

#include <stdio.h>

int somar(int vet[], int tamanho, int i){

    if((tamanho - 1) == i){
      return vet[i];
    }


    return vet[i] + somar(vet, tamanho, (i + 1));
    }

int main(){
    int tamanho = 0, i;

    printf("Tamanho do vetor \n");
    scanf("%d", &tamanho);

    int vet[tamanho];

    for(i = 0; i < tamanho; i++){
        printf("Digite um numero para o vetor \n");
        scanf("%d", &vet[i]);
    }

    printf("Soma: %d \n", somar(vet, tamanho, 0));

    return 0;
}
