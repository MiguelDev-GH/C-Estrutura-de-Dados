#include "lista.c"

int main(){

    Lista* minhaLista = criarLista();
    inserirInicio(minhaLista, 5);
    inserirFInal(minhaLista, 10);
    inserirInicio(minhaLista, 1);
    inserirFInal(minhaLista, 15);

    do{

        if(elemSelecionado < 1) elemSelecionado = 1;
        if(elemSelecionado > tamanhoLista(minhaLista)) elemSelecionado = tamanhoLista(minhaLista);

        limpar

        printf("Lista: ");
        imprimirLista(minhaLista);
        printf("\n");
        printf("1- Avançar\n");
        printf("2- Recuar\n\n");

        printf("3- Ações...\n");

        printf("\n4- Sair");
        printf("\n\n");

        scanf("%d",&op);
        limpar_buffer();

        if(op == 1) elemSelecionado++;
        if(op == 2) elemSelecionado--;
        if(op == 3) menuAcoes(minhaLista,funcSelecionado(minhaLista));
        if(op == 4) rodando = 0;

    } while(rodando == 1);

    limpar
    printf("Saindo...\n");

    return 0;
}