#include <stdio.h>
int main(){

    int v[5];
    int i;

    for(i=0;i<5;i++){
        printf("Insira um dado:\n");
        scanf("%d", &v[i]);
    }
    
    printf("Dados insiridos:\n");
    for(i=0;i<5;i++){
        printf("%d", v[i]);
    }
    return 0;
}
//Vetor e literalmente um lugar aonde tem varias variaveis
//Sintaxe: int v[5] = {10,20,30,40,50}