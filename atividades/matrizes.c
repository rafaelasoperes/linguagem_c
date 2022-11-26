#include <stdio.h>

#include <stdlib.h>

int main(){

int i, num, m[3][3];

for(i=0;i<3;i++)
for(num=0;num<3;num++){

printf("Elemento[%d][%d]= ",i,num);
scanf("%d",&m[i][num]);

}


printf("\n::: numeros Originais :::\n");

    for(i=0;i<3;i++){

    for(num=0;num<3;num++)

    printf("%d ",m[i][num]);
    printf("\n");

    }


for(i=0;i<3;i++)
for(num=0;num<3;num++)
m[i][num]=m[i][num]*5;

printf("\n::: numeros Multiplicados por 5:::\n");

for(i=0;i<3;i++){

    for(num=0;num<3;num++)

    printf("%d ",m[i][num]);

    printf("\n");

}

return 0;

}
