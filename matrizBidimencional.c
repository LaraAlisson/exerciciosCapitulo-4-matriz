#include<stdio.h>
#include<string.h>



int main(){

   // Declaração da matriz 10x10
    int tabuada[10][10];
    int i, j;

    // 1. Preenchimento da Matriz (Laços Aninhados)
    // tabuada[i][j] armazena (i + 1) * (j + 1)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            // A linha 'i' representa (i+1) e a coluna 'j' representa (j+1)
            tabuada[i][j] = (i + 1) * (j + 1);
        }
    }

    // 2. Impressão da Matriz em Formato de Tabela (Laços Aninhados)
    printf("--- Tabela da Tabuada (1 a 10) ---\n");
    
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            // Imprime o elemento com 4 espaços de largura (%4d) para alinhamento
            printf("%4d", tabuada[i][j]);
        }
        // Quebra de linha após cada linha (i) para formar a tabela
        printf("\n");
    }

    // 1. Declaração e inicialização da matriz 4x3 de ponto flutuante (float)
    float matriz[4][3] = {
        {10.5f, 5.0f,  2.5f},  // Linha 0: Soma = 18.0
        {1.0f,  2.0f,  3.0f},  // Linha 1: Soma = 6.0
        {7.5f,  0.5f,  1.0f},  // Linha 2: Soma = 9.0
        {100.0f, 20.0f, 5.0f}   // Linha 3: Soma = 125.0
    };

    int linhas = 4;
    int colunas = 3;

    float soma_linha;

    // Cabeçalho
    printf("--- Matriz Original ---\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%7.2f", matriz[i][j]); // Imprime o valor formatado
        }
        printf("\n");
    }

    printf("\n--- Soma das Linhas ---\n");

    // 2. Cálculo e impressão da soma de cada linha
    for (i = 0; i < linhas; i++) {
        soma_linha = 0.0f; // Inicializa o acumulador de soma para cada nova linha
        
        // Laço interno para percorrer as colunas (elementos) da linha atual
        for (j = 0; j < colunas; j++) {
            soma_linha += matriz[i][j];
        }
        
        // Imprime o resultado da soma da linha
        printf("Soma da Linha %d: %.2f\n", i, soma_linha);
    }

    int dados[2][3] = {{10, 20, 30}, {40, 50, 60}};
    int *p = &dados[1][0];
    
   
    
    for(int i = 0; i < 3; i++){
        printf("\ndados : %d", *(p + i) );
    }

return 0;

}

