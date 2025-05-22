#include <stdio.h>

int main() {
    int carta1, carta2;

    
    printf("Digite o valor da primeira carta: ");
    scanf("%d", &carta1);

    printf("Digite o valor da segunda carta: ");
    scanf("%d", &carta2);
 
    if (carta1 > carta2) {
        printf("Carta 1 venceu com ataque %d contra %d!\n", carta1, carta2);
    } else if (carta2 > carta1) {
        printf("Carta 2 venceu com ataque %d contra %d!\n", carta2, carta1);
    } else {
        printf("Empate! Ambas as cartas têm ataque %d.\n", carta1);
    }

if (carta1== carta2) {
        printf("### Jogo empatou! ###\n");
    } else if ((carta1 == 1) && (carta2== 3) ||
               (carta1 == 2) && (carta2== 1) ||
               (carta1 == 3) && (carta2 == 2))
    {
        printf("### Parabéns, você ganhou! ###\n");
    } else {
        printf("### Você perdeu! ###\n");
    }
    return 0;
}
