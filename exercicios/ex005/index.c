#include <stdio.h>

int main(){

int n, sucessor, antecessor;


printf("Me fale um numero que eu lhe direi o sucessor e antessesor\n");
scanf("%d", &n);

sucessor = n + 1;
antecessor = n - 1;

printf("Seu sucessor e %d\n", sucessor);
printf("Seu antecessor e %d\n", antecessor);

return 0;
}