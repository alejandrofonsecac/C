#include <stdio.h>
#include <string.h>
void main() {
  char senhaCorreta[50] = "123", idCorreto[50] = "123";
  char senhaDigitada[50], idDigitado[50];

  int tentativas = 0;
  int op;

  char nomeUsuario[50] = "Bryam Assolini";
  float saldoConta = 1000.0;
  float valor;

  while (tentativas < 3) {
    printf("Digite seu ID:");
    scanf("%s", idDigitado);
    printf("Digite sua Senha:");
    scanf("%s", senhaDigitada);

    if (strcmp(senhaDigitada, senhaCorreta) == 0 &&
        strcmp(idDigitado, idCorreto) == 0) {

      do {
        printf("[1] Saque\n");
        printf("[2] Deposito\n");
        printf("[3] Saldo\n");
        printf("[4] Sair\n");
        scanf("%d", &op);

        switch (op) {
        case 1:
          printf("\nDigite um valor pra SAQUE:");
          scanf("%f", &valor);
          saldoConta = saldoConta - valor;
          break;
        case 2:
          printf("\nDigite um valor pra DEPOSITO:");
          scanf("%f", &valor);
          saldoConta = saldoConta + valor;
          break;
        case 3:
          printf("SALDO: %.2f\n", saldoConta);
          break;
        case 4:
          printf("Saindo!!!\n");
          tentativas = 3;
          break;
        default:
          printf("Opção Invalida\n");
          break;
        }
      } while (op != 4);{
      printf("Login ou Senha invalidos!!!\n\n");
      tentativas++;
      if (tentativas == 3) {
        printf("Conta Bloqueada!!!\n");
      }
    }
  }
}
}