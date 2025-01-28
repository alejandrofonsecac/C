#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); 

    int numero_max = 3;
    int escolha;
    int placar = 0, placarb = 0;
    int escolhacont;

    printf("Bem-vindo ao jogo de Pedra, Papel e Tesoura contra o bot.\n");

    do { 
        int numero_aleatorio = rand() % numero_max;  

        printf("[0] Papel\n");
        printf("[1] Pedra\n");
        printf("[2] Tesoura\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        if (escolha < 0 || escolha > 2) {
            printf("Escolha invalida! Escolha entre 0, 1 ou 2.\n");
            continue;  
        }

        printf("O bot escolheu: ");
        switch (numero_aleatorio) {
            case 0: printf("Papel\n"); break;
            case 1: printf("Pedra\n"); break;
            case 2: printf("Tesoura\n"); break;
        }

        
        if (escolha == numero_aleatorio) {
            printf("Empate!\n");
        } else if ((escolha == 0 && numero_aleatorio == 1) || 
                   (escolha == 1 && numero_aleatorio == 2) ||
                   (escolha == 2 && numero_aleatorio == 0)) {
            placar++;
            printf("Voce ganhou!!! +1 ponto\n");
        } else {
            placarb++;
            printf("Voce perdeu! +1 ponto para o bot\n");
        }

        printf("Placar: Voce %d - Bot %d\n", placar, placarb);

        printf("Deseja continuar?\n");
        printf("Digite:\n");
        printf("[1] Sim\n");
        printf("[2] Nao\n");
        scanf("%d", &escolhacont);

    } while (escolhacont == 1);

    printf("Jogo encerrado. Placar final: Voce %d - Bot %d\n", placar, placarb);

    
}