#include "listas.h"

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

    printf("\nSTRING: %s\nSizelen: %ld - Sizeof - %ld\n",string,strlen(string),tam);
}

// Menu e visual

void confimar(){
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

void menu(){
    limpar
    printf("=+-----LISTAS-----+=\n\n");
    printf("1- Criar \n");
    printf("2- Editar\n");
    printf("3- Deletar\n\n");
    printf("SAIR para encerrar o programa\n");
}

void opcaoInvalida(){
    limpar
    printf("Opção inválida, escreva algo válido!");
    confimar();
}
