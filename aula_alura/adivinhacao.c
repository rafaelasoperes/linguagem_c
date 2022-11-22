#include <stdio.h> 

int main () {
	printf("******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
	printf("******************************************\n");

	int numerosecreto = 42;

	int chute;

    for (int i = 1; i <= 3; i++) {

        printf("Numero de tentativas e %d de 3: \n", i);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d \n", chute );

        int acertou = (chute == numerosecreto);

        if (acertou) {
            printf("Parabens! Voce acertou!! \n");
            printf("Jogue de novo voce e um bom jogador! \n");
        }

        else{

            int maior = (chute > numerosecreto);
            if (maior) {
                printf("Voce errou!\n");
                printf("Seu chute foi maior que o numero secreto.\n");
            }

            else {
                printf("Voce errou!\n");
                printf("Seu chute foi menor que o numero secreto.\n");
            }
            
        }
    }

    printf("Fim de Jogo");

}