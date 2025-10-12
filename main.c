#include "arquivos.c"

int main(){

    int rodando = 1;

    limpar

    do{
        menu();

        lerOp();

        if(atoi(op) == 1){
            opcao_criarLista();

        } else if(atoi(op) == 2){
            menuEditar();
            lerOp();

            if(atoi(op) == 1){
                printf("Inserir elemento");
                confimar();
            } else if(atoi(op) == 2){
                printf("Remover elemento");
                confimar();
            }

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