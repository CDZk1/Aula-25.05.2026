#include <stdio.h>

int main(){

    float notas[5];
    float soma = 0;
    float media;

    for(int i = 0; i < 5; i++){
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 5;

printf("A media aritmetica da turma e: %2.f\n", media);

    return 0;
}