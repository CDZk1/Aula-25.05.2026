//FAÇA UM PROGAMA EM C QUE LEIA O TAMANHO DA MATRIZ [MxN] E LEIA OS VALORES PARA
//PREENCHER TOTALMENTE A MATRIZ
//EM SEQUIDA, CALCULE A SOMA DOS VALORES:
// 1- DA DIAGONAL PRINCIPAL
// 2- DA TRIANGULAR SUPERIOR
// 3- DA TRIANGULAR INFERIOR
// 4- DA DIAGONAL SECUDARIA

#include <stdio.h>

int main(){
    int tamanho;

    printf("Digite o tamanho da matriz: ");
    scanf("%d", &tamanho);

    int matriz[tamanho][tamanho], d_principal = 0, d_secundaria, t_superior, t_inferior;

    printf("Digite os numeros da matriz: \n");
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            printf("Informe o elemento [%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            if(i == j){
            d_principal += matriz[i][j];
            }
            if(j > i){
                t_superior += matriz[i][j];
            }
            if(i > j){
                t_inferior += matriz[i][j];
            }
            if(i + j == tamanho - 1){
                d_secundaria += matriz[i][j];
            }
            
        }
    }
    printf("A soma da diagonal principal e: %d\n", d_principal);
    printf("A soma da triangular superior e: %d\n", t_superior);
    printf("A soma da triangular inferior e: %d\n", t_inferior);
    printf("A soma da diagonal secundaria e: %d\n", d_secundaria);

    return 0;
}