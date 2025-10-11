#include "arquivos.c"

int main(){

    int rodando = 1;

    limpar

    do{
        menu();

        printf("\n>>> ");
        strLer(op,sizeof op);
        lowercase(op);

        if(atoi(op) == 1){
            opcao_criarLista();

        } else if(atoi(op) == 2){
            limpar
            printf("Opção 2 salve");
            confimar();

        } else if(atoi(op) == 3){
            limpar
            printf("Opção 3 salve");
            confimar();

        } else if(strcmp(op,"sair") == 0){
            finalizarPrograma();
        
        } else{
            opcaoInvalida();
        }

    }while(rodando);

    return 0;
}