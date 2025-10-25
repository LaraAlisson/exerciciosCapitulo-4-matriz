#include <stdio.h>

// Definições de Dimensões para clareza (Opcional, mas boa prática)
#define PLACAS 2
#define LINHAS 3
#define COLUNAS 2

// Exercício 11: Função para Somar Elementos 3D
// O C exige que, em matrizes multidimensionais, apenas a primeira dimensão
// pode ser omitida.
int somar_3d(int matriz[][LINHAS][COLUNAS], int dim1) {
    int soma = 0;

    for (int i = 0; i < dim1; i++) {       // Percorre as placas
        for (int j = 0; j < LINHAS; j++) { // Percorre as linhas
            for (int k = 0; k < COLUNAS; k++) { // Percorre as colunas
                soma += matriz[i][j][k];
            }
        }
    }
    return soma;
}

int main() {
    // Exercício 10: Declaração e Inicialização da Matriz 3D [2][3][2]
    int espaco[PLACAS][LINHAS][COLUNAS] = {
        // Placa 0
        {
            {1, 2},  // Linha 0
            {3, 4},  // Linha 1
            {5, 6}   // Linha 2
        },
        // Placa 1
        {
            {7, 8},  // Linha 0
            {9, 10}, // Linha 1
            {11, 12} // Linha 2
        }
    };

    printf("--- Exercicio 10: Conteudo da Matriz 3D ---\n");

    // Percorrer e Imprimir a Matriz
    for (int i = 0; i < PLACAS; i++) {
        for (int j = 0; j < LINHAS; j++) {
            for (int k = 0; k < COLUNAS; k++) {
                printf("Espaco[%d][%d][%d] = %d\n", i, j, k, espaco[i][j][k]);
            }
        }
    }

    // Exercício 11: Chamada da Função
    int soma_total = somar_3d(espaco, PLACAS);

    printf("\n--- Exercicio 11: Soma dos Elementos ---\n");
    printf("Soma Total de todos os elementos: %d\n", soma_total);
    // (A soma de 1 a 12 é 78)

    return 0;
}