#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

// 0 1 1 2 3 5 8 13...
//       A 
//     2
//   1
// 0




int main(int argc, char *argv[]) {
  setlocale(LC_ALL, "Portuguese");

  int i, ant1, ant2, ant0, atual;
  int escolha, escolha1;

  ant2  = 2;
  ant1 = 1;
  ant0 = 0;
  
  
  printf("Se deseja que eu apresente os primeiros 8 numeros da sequencia Fibonacci, digite 1\n");
  printf("Se deseja escolher um numero especifico da sequencia (de 1 a 8), digite 2\n");
  scanf("%d", &escolha);

  switch (escolha) {

    case 1:
      printf("Serie de Fibonacci (8 primeiros termos):\n");
      printf("%d %d %d", ant0, ant1, ant2); // Imprime os dois primeiros termos

      for (i = 3; i <= 8; i++) {
        atual = ant1 + ant0 + ant1;
        printf("%d ", atual);
        ant0 = ant1;
        ant1 = ant2;
        ant2 = atual;
      }
      printf("\n"); // Para pular uma linha após imprimir a série
      break;

    case 2:
      printf("Escolha um numero da serie Fibonacci, de 1 a 8:\n");
      scanf("%d", &escolha1);

      if (escolha1 == 1) {
        printf("O valor que voce escolheu foi: %d\n", ant2);
      } else if (escolha1 == 2) {
        printf("O valor que voce escolheu foi: %d\n", ant1);
      } else {
        for (i = 3; i <= escolha1; i++) {
          atual = ant1 + ant0 + ant2;
          ant0 = ant1;
          ant1 = ant2;
          ant2 = atual;
        }
        printf("O valor que voce escolheu foi: %d\n", atual);
      }
      break;

    default:
      printf("Opcao invalida.\n");
      break;
  }

  return 0;
}
