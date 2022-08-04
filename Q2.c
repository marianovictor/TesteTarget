//Victor Mariano Rocha
#include<stdlib.h>
#include<stdio.h>

int main(){
    int numeroInformado, fibonacci=0, auxiliar1=0, auxiliar2=1, i;

    printf("Informe um numero para ser verificado: \n");
    scanf("%d", &numeroInformado);

    for(i=1; i<numeroInformado; i++){
        printf("%d\n", fibonacci);

		fibonacci = auxiliar1 + auxiliar2;
		auxiliar1 = auxiliar2;
 		auxiliar2 = fibonacci;
         
        if(fibonacci == numeroInformado){
            printf("%d\n", fibonacci);
            printf("Numero informado esta na sequencia de fibonacci");
            break;
        }else if (fibonacci > numeroInformado)
        {
            printf("Numero informado NAO esta na sequencia de fibonacci");
            break;
        }
          
    }

}
