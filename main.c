#include "arquivos.c"

int main(){

    int rodando = 1;

    limpar

    do{
        menu();

        printf("\n>>> ");
        strLer(op,sizeof op);
        lowercase(op);

        if(strcmp(op,"sair") == 0){
            finalizarPrograma();
        }
        

    }while(rodando);

    return 0;
}