#include <stdio.h>

int soma(int num1, int num2)

{

    int soma = 0;
    soma = num1 + num2;
    return soma;

}

main ()
{

int n1 = 9 , n2 = 19, res = 0;

res=soma(n1, n2); //chamada da função

printf ("\nA SOMA EH: %d.\n\n", res);

}


