#include<stdio.h>
#include<string.h>
#include<stdlib.h>



char *copiarString(const char *origin){

    int tam = strlen(origin);

    char *destino = (char *)malloc(tam + 1);

    if(destino == NULL){
        printf("Erro de alocacao de memoria");
        return NULL;
    }

    *destino = '\0';

    //Este trecho de codigo é uma copia valida de estring.{
        /*
            Obs. mudar return para destino1
            char *destino1 = (char *)malloc(sizeof(tam + 30));
            strcpy(destino1,origin);
            strcat(destino1," Foi copiado da original");
        */
    //}

    char *temp = destino;
    
    while(*origin != '\0'){
        *temp++ = *origin++;
    }

    *temp = '\0';

    return destino;
}

void *trocaCaracter( char *str){

   do{
        if(*str == '!'){
            *str = '.';
        }
        str++;
   }while(*str != '\0');

        

}

char *buscar_char(const char *str, char c) {
    // Percorre a string até o terminador nulo ('\0')
    while (*str != '\0') {
        // Verifica se o valor na posição atual do ponteiro (*str) é igual ao caractere buscado (c)
        if (*str == c) {
            // Se encontrou, retorna o endereço atual do ponteiro (str)
            return (char *)str;
        }
        
        // Move o ponteiro para o próximo caractere
        str++;
    }

    // Se o loop terminar sem encontrar o caractere, retorna NULL
    return NULL;
}

int main(){

    int vetor[]={10,20,30,40,50};
    int *p_vetor = vetor;

    int tam = sizeof(vetor)/sizeof(vetor[0]);
    for(int i = 0; i < tam; i++){
        printf("\nVetor[%d] = %d",i,*p_vetor);
    }

    printf("\nDiferenca valor do primeiro para o ultimo e: %d ",(*(p_vetor + tam - 1) - (*(p_vetor))));

    int *final = &vetor[5];
    while(p_vetor < final){

        printf("\nVetor = %d",*p_vetor);
        p_vetor++;

    }
    char str[]="Texto!";
    char *stringrcpy = copiarString(str);

    if(stringrcpy != NULL){
        printf("\n %s", stringrcpy);
    }

   // free(stringrcpy);
   // stringrcpy = NULL;

    trocaCaracter(str);
    printf("\nTrocar caracter = %s", str);


    char erro[][52] = {
        "Erro 0: Erro de Sintaxe",
        "Erro 1: memoria Cheia",
        "Erro 2: Arquivo nao Encontrado"
    };

    printf("\nDigite um Numero de 0 a 2\n");

    scanf("%d",&tam);

   printf("Erro = %s\n",erro[tam]);

    const char *string_original = "Programacao";
    char caractere_busca = 'r';
    
    // Chama a função
    char *resultado = buscar_char(string_original, caractere_busca);
    
    printf("String original: %s\n", string_original);
    
    if (resultado != NULL) {
        printf("Caractere '%c' encontrado.\n", caractere_busca);
        // Imprime a substring a partir do endereço retornado
        printf("Substring a partir de '%c': %s\n", caractere_busca, resultado);
    } else {
        printf("Caractere '%c' nao encontrado na string.\n", caractere_busca);
    }


    return 0;
}