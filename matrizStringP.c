#include<stdio.h>
#include<string.h>
#include <stdlib.h>


void inverterString(char *str, int tam){

    char aux;

    for(int i = 0; i < (tam/2); i++){
        aux = str[i];
        str[i] = str[tam - 1 - i];
        str[tam - 1 - i] = aux;
    }

}

char *inverteString(const char *stringOriginal){

    int tam = strlen(stringOriginal);
    
    char *stringCopiaInvertida = (char *)malloc(tam + 1);
    
    if(stringCopiaInvertida == NULL){
        return NULL;
    }

    strcpy(stringCopiaInvertida,stringOriginal);

    char aux;
    for(int i = 0; i < (tam/2); i++){
        aux = stringCopiaInvertida[i];
        stringCopiaInvertida[i] = stringCopiaInvertida[tam - 1 - i];
        stringCopiaInvertida[tam - 1 - i] = aux;
    }


    return stringCopiaInvertida;
}

int main(){


    const char *frutas[] = {
        "Pessego",
        "Maca",
        "Laranja",
        "Banana",
        "Mamao"
    };

    int numFrutas = sizeof(frutas)/sizeof(frutas[0]);

    for(int i = 0; i < numFrutas; i++){
        printf("Frutas:%d -> %s\n",i,frutas[i]);
    }

     for(int i = 0; i < numFrutas; i++){
        if(i == 2){
            int tan = strlen(frutas[i]);
            printf("A frutas na posicao :%d e a %s e tem o tamanho de %d caracteres\n",i,frutas[i], tan);
        }
    }

    char myFruta[10];

    printf("Digite o nome de uma fruta!");
    fgets(myFruta,10,stdin);

    myFruta[strcspn(myFruta, "\n")] = '\0';
    //

    for(int i = 0; i < numFrutas; i++){

        if(strcmp(myFruta,frutas[i]) == 0){
            printf("\nsua Frutas ja contem na cesta.\n",myFruta);
        }
    }

    int len = strlen(myFruta);



    char *str = inverteString(myFruta);

    if (str != NULL) {
        printf("funcao com retorno Original: %s\n", myFruta);   // Mantém "TESTE"
        printf("funcao com retorno Invertida: %s\n", str); // Imprime "ETSET"

        // MUITO IMPORTANTE: Liberar a memória alocada dinamicamente
        free(str);
    }

        inverterString(myFruta,len);
    printf("Funcao sem retorno = %s",myFruta);


    return 0;
}