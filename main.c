#include "arquivos.c"

int main(){

    limpar

    do{
        printf("\n>>> ");
        strLer(op,sizeof op);
    }while(strcmp(op,"sair"));

    return 0;
}