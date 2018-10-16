#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>

int main ()
{

    double fat=1;
    int n,i;
    int inicio, final, tmili;
    printf("Digite um numero pra saber seu fatorial.\n");
    scanf("%d",&n);

    inicio = GetTickCount();

    for(i=n;i>1;i--)
    {
         fat=fat*i ;
    }
    printf("Fatorial de %d==%.2lf.\n",n,fat);

    final = GetTickCount();
    tmili = final - inicio;

    printf("tempo decorrido: %d\n", tmili);
    system("PAUSE>NULL");
    return 0;
}

