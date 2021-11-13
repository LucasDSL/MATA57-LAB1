//Exercício 07. Escreva um programa que leia primeiro os 6 números gerados pela loteria e depois os 6 números do seu bilhete. 
//O programa então verifica quantos números o jogador acertou. 
//Em seguida, ele aloca espaço para um vetor de tamanho igual a quantidade de números corretos e guarda os números corretos nesse vetor. 
//Finalmente, o programa exibe os números sorteados e os seus números corretos.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
    int lot[6],bilhete[6], *bil,i,tam=0,k=0; // criação do vetor de numeros da loteria e do bilhete, um vetor e algumas variáveis.
    
    printf("Os 6 numeros da caixa:\n"); // leitura dos 6 numeros gerados pela loteria
    for(i=0; i<6; i++){
        scanf("%d", &lot[i]);
    }

    printf("Os 6 numeros do bilhete:\n"); // leitura dos numeros do bilhete
    for(i=0; i<6; i++){
        scanf("%d", &bilhete[i]);
    }
    
    for(i=0; i<6; i++){           // verifica quantos numeros sao iguais aos do bilhete e guarda esse valor em "tam"
        if(lot[i]==bilhete[i]){
            tam++;
        }
    }
    bil = malloc(tam * sizeof(int));  // alocando espaco para um vetor de tamanho igual a quantidade de números corretos

    for(i=0; i<6; i++){            // armazenando os numeros corretos no vetor alocado acima:
        if(lot[i]==bilhete[i]){   // se o loterico i for igual ao bilhete i, colocamos este valor no vetor alocado
            bil[k]=bilhete[i];   // armazenado no indice k que, inicialmente, e 0, e vai sendo incrementado ao longo do loop
            k++;
        }
    }
    printf("\nNumeros sorteados pela caixa:\n");
    for(i=0; i<6; i++){             // mostra os numeros escolhidos pela loterica
        printf("%d ", lot[i]);
    }
    printf("\nNumeros acertados:\n");
    for(i=0; i<k; i++){            // mostra os numeros acertados, armazenados no vetor alocado
        printf("%d ", bil[i]);
    }


    free(bil);                     // liberacao da memoria
}