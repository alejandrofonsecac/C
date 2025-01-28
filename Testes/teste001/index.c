#include <stdio.h>

int main(void){

int n;
int resultado;

printf("Insira um numero que eu irei te dizer se ele  impar ou par:");
scanf("%d", &n);

if( n % 2 ==0){
  printf("É par");
}else{
  printf("é IMPAR");
}
  
}
