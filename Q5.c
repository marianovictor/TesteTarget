//Victor Mariano Rocha
#include<stdio.h>

int main(){
    char string[6], novaString[6];
    int i, contador=0;
    scanf(" %s", string);
    for(i=0; i<6; i++){
        printf("%c", string[i]);
    }

    for(i=6; i>0; i--){
        novaString[contador]=string[i];
        printf("\nletra: %c", novaString[contador]);
        printf("\ncontador:%d", contador);
        printf("\ni:%d", i);
        contador++;
    }
    for(i=0; i<6; i++){
        printf("%c", novaString[i]);
    }
}