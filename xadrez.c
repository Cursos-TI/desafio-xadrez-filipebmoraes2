//Jogo de xadrez aventureiro
#include <stdio.h>

int main() {
    //Declaração das variáveis de iteração
    int passoTorre = 0, passoBispo = 0, passoRainha = 0;
    //laço de iteração para a torre andar 5 passos a direita
    for (passoTorre = 0; passoTorre < 5; passoTorre++) {
        printf("Torre direita...\n"); //imprime o passo da torre.
    }

    //movimento do bispo cinco casas na diagonal cima direita
    while (passoBispo < 5) {
        printf("Bispo cima-direita...\n"); //Imprime os passos do bispo
        passoBispo++;
    }
    //Movimento 8 passos da rainha para esquerda 
    do {
        printf("Rainha esquerda...\n");
        passoRainha++;
    } while (passoRainha < 8);
    printf("----------------------------------------\n"); //linha entre a rainha e o cavalo
    // passos do cavalo
    for (int passoHorizontal = 0; passoHorizontal < 1; passoHorizontal++) {
        for (int PassoVertical = 0; PassoVertical < 2; PassoVertical++) {
            printf("Cavalo baixo\n");
        }
        printf("Cavalo esquerda\n");
    }
    return 0;
}
