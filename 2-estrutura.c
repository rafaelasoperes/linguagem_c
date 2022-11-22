#include <stdio.h>

int main() {
    int x = 0, y = 0, z = 0;

    printf("programa para verificação de valores");

    printf("Entre com o primeiro valor: ");
    scanf("%d", &x);

    printf("Entre com o segundo valor: ");
    scanf("%d", &y);

    printf("Entre com o terceiro valor: ");
    scanf("%d", &z);

    if (x == 0 && y == 0 && z == 0)
        printf("não pode haver valor zero");

    else if ((x == y && (x == z))){

        printf("Todos os numeros são iguais");
    }
    
}