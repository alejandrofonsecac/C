#include <stdio.h>

int main() {
    

    
  float notaAnalise, notaCiencias, notaLogica, media;
  float mediaMinima = 7;

  printf("Digite a usa nota em Analise e Projeto de Sistemas: "); // Salva nas
                                                                  // variaveis a
                                                                  // nota do
                                                                  // usuario
  scanf("%f", &notaAnalise);
  printf("Digite a usa nota em Ciencias da Computacao: ");
  scanf("%f", &notaCiencias);
  printf("Digite a usa nota em Logica Computacional: ");
  scanf("%f", &notaLogica);

  if (notaAnalise <
      mediaMinima) { // Fala para usuario quantos pontos ele precisa para passar
    printf("\nA nota de Analise está abaixo da media, faltam %.1f pontos para "
           "alcançar a media",
           mediaMinima - notaAnalise);
  }
  if (notaCiencias < mediaMinima) {
    printf("\nA nota de Ciencias está abaixo da media, faltam %.1f pontos para "
           "alcançar a media",
           mediaMinima - notaCiencias);
  }
  if (notaLogica < mediaMinima) {
    printf("\nA nota de Lógica está abaixo da media, faltam %.1f pontos para "
           "alcancar a media",
           mediaMinima - notaLogica);
  }

  media = (notaAnalise + notaCiencias + notaLogica) / 3;
  printf("\n\nSua media é: %.1f\n", media);

  if (media >= mediaMinima) {
    printf("\nAPROVADO!!!!");
  } else {
    printf("\nREPROVADO!!!");
  }

  switch ((int)media) { // Converte a nota em numeros para o padrão americano e
                        // apresenta para o usuario
  case 10:
    printf("\nSua nota no padrao americano e: A\n");
    break;
  case 9:
    printf("\nSua nota no padrao americano e: A\n");
    break;
  case 8:
    printf("\nSua nota no padrao americano e: B\n");
    break;
  case 7:
    printf("\nSua nota no padrao americano e: B\n");
    break;
  case 6:
    printf("\nSua nota no padrao americano e: C\n");
    break;
  case 5:
    printf("\nSua nota no padrao americano e: C\n");
    break;
  case 4:
    printf("\nSua nota no padrao americano e: D\n");
    break;
  case 3:
    printf("\nSua nota no padrao americano e: D\n");
    break;
  case 2:
    printf("\nSua nota no padrao americano e: F\n");
    break;
  case 1:
    printf("\nSua nota no padrao americano e: F\n");
    break;
  case 0:
    printf("\nSua nota no padrao americano e: F\n");
    break;
  default:
    printf("\nErro ao calcular a nota no padrao americano.\n");
  }


}