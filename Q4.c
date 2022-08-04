//Victor Mariano Rocha
#include<stdio.h>


int main(){

    float FaturalmentoMensal[5]={67836.43, 36678.66, 29229.88, 27165.48, 19849.53};
    float percentual=0, total=0;
    int i;

    for(i=0; i<5; i++){
        total+=FaturalmentoMensal[i];
    }

    for(i=0; i<5; i++){
        percentual=(FaturalmentoMensal[i]/total)*100;

        switch (i){
            case (0):
                printf("O percentual de SP no faturalmento mensal e: %.2f %%\n", percentual);
            break;
            case (1):
                printf("O percentual de RJ no faturalmento mensal e: %.2f %%\n", percentual);
            break;
            case (2):
                printf("O percentual de MG no faturalmento mensal e: %.2f %%\n", percentual);
            break;
            case (3):
                printf("O percentual de ES no faturalmento mensal e: %.2f %%\n", percentual);
            break;
            case (4):
                printf("O percentual de outros estados no faturalmento mensal e: %.2f %%\n", percentual);
            break;
            default:
                break;
        }
    }


}