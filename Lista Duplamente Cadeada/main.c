#include "lista.c"

int main(){

    Lista* minhaLista = criarLista();
    inserirInicio(minhaLista, 5);
    inserirInicio(minhaLista, 100);
    inserirInicio(minhaLista, 1);

    do{

        if(elemSelecionado < 1) elemSelecionado = 1;
        if(elemSelecionado > tamanhoLista(minhaLista)) elemSelecionado = tamanhoLista(minhaLista);

        limpar

        imprimirLista(minhaLista);
        printf("Selecionado: %d\n\n",funcSelecionado(minhaLista,elemSelecionado));
        printf("1- Avançar\n");
        printf("2- Recuar\n");
        printf("\n3- Sair");
        printf("\n\n");

        scanf("%d",&op);

        if(op == 1) elemSelecionado++;
        if(op == 2) elemSelecionado--;
        if(op == 3) rodando = 0;

    } while(rodando == 1);

    limpar
    printf("Saindo...\n");

    return 0;
}