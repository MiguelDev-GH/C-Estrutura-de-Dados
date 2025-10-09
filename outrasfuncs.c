#include "listas.h"

void strLer(char *string, size_t tam){

    scanf("%[^\n]%*c", string);

    if(strlen(string) > tam){
        strcpy(string,"erro");
    }

    printf("\nSTRING: %s\nSizelen: %ld - Sizeof - %ld\n",string,strlen(string),tam);
}