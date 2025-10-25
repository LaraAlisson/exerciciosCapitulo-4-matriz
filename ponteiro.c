#include<stdio.h>


void *trocarValor(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return NULL;  // retorno genérico (poderia retornar void também)
};


int main(){


    int idade = 25;
    char inicial = 'c';
    float altura = 1.85;

    int *pIdade = &idade;
    char *pInicial = &inicial;
    float *pAltura = &altura;


    printf("Idade = %d\nInicial = %c\nAltura = %.2f", *pIdade,*pInicial,*pAltura);

    *pIdade = 30;

    printf("\nIdade = %d\n", *pIdade);

    printf("\nUsando o &: \nIdade = %p\nInicial = %p\nAltura = %p", &idade,&inicial,&altura);
    printf("\nUsando por ponteiro: \nIdade = %p\nInicial = %p\nAltura = %p",pIdade,pInicial,pAltura);

    //p_int++ -> por que um inteiro usa 16 bits ou 32 dependendo do sistema
    //p_char== -> char e apenas um byte ou sej a 8 bits

    int a = 11;
    int b = 25;

    printf("\nvalores original de A = %d e B = %d",a, b);
    trocarValor(&a,&b);
    printf("\nvalores Trocados de A = %d e B = %d",a, b);

    return 0;
}