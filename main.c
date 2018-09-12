#include <stdio.h>
#include <stdlib.h>

/*
 * Lendo número de variável através de um arquivo.
 * */
int main()
{
    int num;
    FILE *fptr;

    if ((fptr = fopen("program.txt","r")) == NULL){
        printf("Erro ao abrir o arquivo de texto.");

        // Program exits if the file pointer returns NULL.
        exit(1);
    }

    fscanf(fptr,"%d", &num);

    printf("Vor de n=%d", num);
    fclose(fptr);

    return 0;
}