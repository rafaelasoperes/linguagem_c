#include <stdio.h>

int main(){

    int num_pares = 0;
    int primeiro, segundo, i;
	
    printf("\n Digite o numero inicial\n");
    scanf ("%d",&primeiro);

    printf("\n Digite o numero final\n");
    scanf ("%d",&segundo);

    for (i = primeiro; i <= segundo; i++) {
        if(i%2 == 0) {
            printf ("%d e par!\n", i);
			num_pares++;
        } else {
            printf("%d e impar!\n", i);
        }
}























// #include <stdio.h>

// int main () {
//     int primeiro, segundo;

//     printf("Digite o primeiro número: ");
//     scanf("%d ", &primeiro);

//     printf("Digite o segundo número: ");
//     scanf("%d \n", &segundo);

//     for(int i = primeiro; i <= segundo; i++ );
//         int par = (primeiro % 2 == 0);
    
//         if (par) {
//             printf("O numero %d é par!", primeiro);
//         } else {
//             printf("Seu numero é impar!");
//         }









}