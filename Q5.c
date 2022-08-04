//Victor Mariano Rocha
#include<stdio.h>

int main(){
    char string[6], novaString[6];
    int i, contador=0;

    print("Digite a string: \n");
    scanf(" %s", string);

    for(i=6; i>0; i--){
        novaString[contador]=string[i];
        contador++;
    }
    for(i=0; i<6; i++){
        printf("%c", novaString[i]);
    }
}