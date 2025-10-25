#include<stdio.h>
#include<string.h>

int my_funcao(char *vetor){
    int i = 0;

    while(vetor[i] != '\0'){
        i++;
    }


    return i;
}

int main(){


     char cidade[20];
     printf("Digite o nome de sua cidade!\n");
     scanf("%19s",cidade);
     printf("Sua cidade e : %s\n",cidade);


     char str1[50];
     char str2[50];
     strcpy(str1,"Programacao em C");
     printf("String funcao copy str1 = %s\n",str1);
     strcat(str1," e fundamental para o programador!");
     printf("String funcao cat str1 = %s\n",str1);
     int len = strlen(str1);
     printf("O tamanho da string str1 e : %d",len);

     setbuf(stdin, NULL);
     printf("\nDigite uma palavra: \n");
     fgets(str2,50,stdin);
     len = strlen(str2);
     printf("\nO tamanho da string str2 e : %d\n",len);

     if (strcmp(str1, str2) == 0) {
        printf("Sao do mesmo tamanho lexicograficamente"); 
    } else if (strcmp(str1, str2) > 0) {
        printf("str1 lexicograficamente maior que str2"); 
        printf("str2 lexicograficamente maior que str1"); 
    }
    len = 0;
    len = my_funcao(str1);
    printf("\nO tamanho da string enviado para a funcao e : %d\n",len);

    return 0;
}

/*
    Desafio Prático: Implementando strlen()

Sem usar a função strlen() da biblioteca padrão, 
crie sua própria função chamada meu_strlen que receba um ponteiro 
para char (const char *s) e retorne o comprimento da string (o número de caracteres antes do \0).
Dica: Use um laço de repetição para percorrer o vetor até encontrar o caractere nulo.

*/