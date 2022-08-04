//Victor Mariano Rocha
#include<stdio.h>

int main(){
    float faturamentoDiario[30]={22174.1664, 24537.66998, 26139.6134, 0, 0, 26742.6612, 0, 42889.2258, 46251.174, 11191.4722, 0, 0, 3847.4823, 373.7838, 2659.7563, 48924.2448, 18419.2614, 0, 0, 35240.1826, 43829.1667, 18235.6852, 4355.0662, 13327.1025, 0, 0, 25681.8318, 1718.1221, 13220.495, 8414.61};
    float menor=faturamentoDiario[0], maior=0, soma=0, media=0;
    int i, numeroDias=0;

    for(i=0; i<30; i++){
        if(faturamentoDiario[i]<menor && faturamentoDiario[i] != 0){
            menor=faturamentoDiario[i];
        }
        if(faturamentoDiario[i]>maior){
            maior=faturamentoDiario[i];
        }
        soma+=faturamentoDiario[i];
    }
    media=soma/30;

    for(i=0; i<30; i++){
        if (faturamentoDiario[i]>media){
            numeroDias++;
        }
        
    }

    printf("O menor faturamento foi: %f\n", menor);
    printf("O maiorr faturamento foi: %f\n", maior);
    printf("O nunmero de dias que o faturamento foi maior que a media mensal foi: %d\n", numeroDias);   
}