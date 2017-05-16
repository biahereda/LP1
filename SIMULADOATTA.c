#include <stdio.h>
#include <string.h>

typedef struct politica {
    char partido[20];
    int n_d,n_s,n_n,n_a,x;
}STPOLI;

int main (){
    STPOLI POLI[100];
    int i, j, c_p=0, soma_d=0, aux_total=0, aux_total2=0, aux_sim=0, aux_nao=0, aux_abs=0;
    char aux [100][10], aux_2[1000];  // esse aux é pra gravar no segundo for o partido e aux2 o voto

    printf ("************PARTIDOS E NUMEROS DE DEPUTADOS***************\n\n");


    for (i=0;i<100;i++){// ler os partidos e numeros de deputados
        scanf (" %s", POLI[i].partido);
        if (strcmp(POLI[i].partido, "FIM")==0) break;
        c_p++;
        scanf ("%d",&POLI[i].n_d);
        soma_d=soma_d+POLI[i].n_d;
}





    printf ("************LEITURA DOS VOTOS***************\n\n");

    for (i=0;i<soma_d;i++){
        scanf (" %s", aux[i]);
        if (strcmp(aux[i], "FIM")==0) break;
        scanf (" %c", &aux_2[i]);
            for (j=0;j<c_p;j++){
                if (strcmp (aux[i], POLI[j].partido)==0){
                    switch (aux_2[i]){
                        case 'S': POLI[j].n_s++;
                                    break;

                        case 'N': POLI[j].n_n++;
                                 break;

                        case 'A': POLI[j].n_a++;
                                  break;
                }

            }
        }
    }
      printf ("************RESULTADO PARCIAL***************\n\n");

        for (i=0;i<c_p;i++){//resultado parcial de cada partido
                aux_total =POLI[i].n_a+POLI[i].n_n+POLI[i].n_s;
                printf("%s: %d (FALTAS) %.1f\n\n", POLI[i].partido, POLI[i].n_d-aux_total, (float) (POLI[i].n_d-aux_total)*100/POLI[i].n_d);
                printf ("%d (SIM) %.1f %% \n\n", POLI[i].n_s, (float) POLI[i].n_s*100/aux_total);
                printf ("%d (NAO) %.1f %% \n\n", POLI[i].n_n, (float) POLI[i].n_n*100/aux_total);
                printf ("%d (ABS) %.1f %% \n\n", POLI[i].n_a, (float) POLI[i].n_a*100/aux_total);
                aux_total2= aux_total2+POLI[i].n_a+POLI[i].n_n+POLI[i].n_s;
                aux_sim=aux_sim+POLI[i].n_s;
                aux_nao=aux_nao+POLI[i].n_n;
                aux_abs=aux_abs+POLI[i].n_a;

        }

        printf ("************RESULTADO FINAL***************\n\n");//resultado final da votacao
        printf ("%d (SIM) %2.f %%\n\n", aux_sim, (float) aux_sim*100/aux_total2);
        printf ("%d (NAO) %2.f %%\n\n", aux_nao, (float) aux_nao*100/aux_total2);
        printf ("%d (ABS) %2.f %%\n\n", aux_abs, (float) aux_abs*100/aux_total2);









}
