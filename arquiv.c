#include <stdio.h>

int main (){
    FILE *pv;
    pv= fopen("bianca.txt", "w");
    if (pv==NULL){
        printf ("ERRO");
        exit (1);
    }
    fputs ("testando", pv);
    fclose (pv);

}
