#include<stdio.h>


/*
    Exercício 3: Função e Referência (Passando Matrizes Unidimensionais para Funções).
*/

float soma_vetor(float *vetor, int tamanho){

    float soma = 0;
    

    for(int i = 0; i < tamanho; i++){
       
        soma = soma + *(vetor + i);
        
    }

    return soma;
}

void inverter_matriz(int *vetor, int tamanho){

    int temp;
    for(int i = 0; i < tamanho/2; i++) {
        temp = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = temp;

    };



}



int main(){

    //Exercício 2: Ponteiro e Indexação (Gerando um Ponteiro para uma Matriz)
    float vetor[] = {0.5, 0.8, 1.5, 8.4, 10.9};
    float *p = vetor;

    int tamanhoVetor = sizeof(vetor)/sizeof(vetor[0]);

    for(int i = 0; i < tamanhoVetor; i++){
        printf("\nvalor  = %.2f", *(p + i));
    }

    printf("\nValor do Vetor somado: %.2f",soma_vetor(vetor, tamanhoVetor));
    
    int vetor01[] = {1,2,3,4,5,6,7,8,9,10,11};
    int n = sizeof(vetor)/sizeof(vetor[0]);

    
    inverter_matriz(vetor01,n);

    for(int i = 0; i< n; i++){
        printf("\nValor : %d",vetor01[i]);
    }


    return 0;
}


