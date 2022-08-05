#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int segundos = time(0);
    srand(segundos);
    int numeroGrande = rand();
    short numeroSecreto = numeroGrande % 100;
    short chute;
    short tentativas = 1;
    float pontos = 1000;
    short acertou;
    printf("          P  /_\\  P                                \n");
    printf("         /_\\_|_|_/_\\                              \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao       \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhaçao!   \n");
    printf("    |' '  |  |_|  |'  ' |                           \n");
    printf("    |_____| ' _ ' |_____|                           \n");
    printf("          \\__|_|__/                                \n\n\n");
    short nivel;
    printf("Qual o nivel de dificuldade?\n");
    printf("( 1 ) Facil ( 2 ) Medio ( 3 ) Dificil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);
    short numeroDeTentativas;
    switch (nivel) {
        case 1 :
            numeroDeTentativas = 20;
            break;                    
        case 2 :
            numeroDeTentativas = 15;
            break;        
        case 3 :
            numeroDeTentativas = 6;
            break;
        default :
            printf("Voce deve digitar um valor valido\n");
            printf("Valor padrao: Facil");
            break;
    }
    for (short i = 1; i <= numeroDeTentativas; i++) {
        printf("Tentativa %d\n", tentativas);
        printf("Qual e o seu chute? ");
        scanf("%d", &chute);
        printf("seu chute foi %d\n", chute);
        if (chute < 0) {
            printf("Voce nao pode chutar numeros negativos\n");
            continue;
        }
        acertou = chute == numeroSecreto;
        short maior = chute > numeroSecreto;
        if (acertou) {
            break;
        }
        else if (maior) {
            printf("Seu chute foi maior que o numero secreto!\n");
        }
        else {
            printf("Seu chute foi menor que o numero secreto!\n");
        }
        tentativas++;        
        float pontosPerdidos = abs(chute - numeroSecreto) / (float) 2;
        pontos -= pontosPerdidos;
    }
    printf("Fim de jogo!!!\n\n");
    if (acertou) {
        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n\n");
        printf("Voce acertou em %d tentativas\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);
    } else {
        printf("       \\|/ ____ \\|/       \n");
        printf("        @~/ ,. \\~@        \n");
        printf("       /_( \\__/ )_\\       \n");
        printf("          \\__U_/          \n\n");
        printf("Voce perdeu!!!");
    }
}
