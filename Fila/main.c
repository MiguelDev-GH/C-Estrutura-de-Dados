#include "fila.c"

int main(){

    Fila* minhaFila = criarFila();

    Enfileirar(minhaFila,1);
    Enfileirar(minhaFila,2);
    Enfileirar(minhaFila,3);
    Enfileirar(minhaFila,4);

    imprimirFila(minhaFila);

    return 0;
}