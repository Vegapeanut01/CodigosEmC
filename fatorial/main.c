#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, fatorial;

    printf("Digite o valor de N: ");
    scanf("%d",&n);

    fatorial = 1;

    for(i=n ; i>0; i--){
        fatorial = fatorial * i;
    }

    printf("FATORIAL = %d\n", fatorial);

    return 0;
}
