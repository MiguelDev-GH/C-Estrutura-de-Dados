#include "listas.h"

void limpar_buffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void lowercase(char *c){
    for(int i = 0; c[i] != '\0' ;i++){
        c[i] = tolower(c[i]);
    }
}

void strLer(char *string, size_t tam){

    scanf("%[^\n]%*c", string);

    if(strlen(string) > tam){
        strcpy(string,"erro");
    }

    //printf("\nSTRING: %s\nSizelen: %ld - Sizeof - %ld\n",string,strlen(string),tam);
}

// Menu e visual

void confirmar(){
    char c;
    printf("\n\nAperte <ENTER> para voltar\n");
    scanf("%*[^\n]%*c");
    getchar();
}

void finalizarPrograma(){
    limpar
    printf("Finalizando...\n");
    exit(0);
}

void opcaoInvalida(){
    limpar
    printf("Opção inválida, escreva algo válido!");
    confirmar();
}

void lerOp(){
    printf("\n>>> ");
    strLer(op,sizeof op);
    lowercase(op);
}