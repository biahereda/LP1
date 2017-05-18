#include <stdio.h>

int main (){
    FILE *pv;
    char nome[5][20];
    int i;
    pv= fopen("bianca.txt", "w");
    if (pv==NULL){
        printf ("ERRO");
        exit (1);
    }
    for (i=0;i<5;i++){
        printf ("Insira o nome do %d aluno\n", i+1);
        scanf (" %s", nome[i]);
    }
    for (i=0;i<5;i++){
        fprintf(pv, " %s\n", nome[i]);
    }

    fclose (pv);

}
