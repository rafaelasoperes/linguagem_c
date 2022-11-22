//#include <stdio.h>
main() {
    float var1, var2, result;
    int opc;

    printf("Bem-Vindo a calculadora");

    printf("Opcao 1 - Soma");
    printf("Opcao 2 - Subtração");
    printf("Opcao 3 - Multiplicação");
    printf("Opcao 4 - Divisão");

    printf("Escolha uma opção de calculo");
    scanf("%d", &opc);

    printf("Digite o primeiro valor: ");
        scanf("%f", &var1);
    printf("Digite o segundo valor: ");
        scanf("%f", &var1);

    if(opc == 1)
        result = var1 + var2;
    if(opc == 2)
        result = var1 - var2;
    if(opc == 3)
        result = var1 * var2;
    if(opc == 4)
        result = var1 / var2;

    printf("O resultado final é: %f" ,result);
    
}