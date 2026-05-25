#include <stdio.h>

int main(){

    int tamanho, maior = -2147483648, menor = 2147483647;

    printf("informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for(int i = 0; i < tamanho; i++){
        printf("Informe o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if(vetor[i] > maior){
            maior = vetor[i];
        }

        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
    printf("Os numeros salvos no vetor de tamanho %d\n", tamanho);
    printf("O maior numero informado foi %d\n", maior);
    printf("O menor numero informado foi %d\n", menor);

    return 0;
}