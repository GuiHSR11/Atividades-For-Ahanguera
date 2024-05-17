#include <stdio.h>

int main()
{
    int fatorial, resultado;
    resultado = 1;
    
    printf("Digite um numero: \n");
    scanf("%i", &fatorial);
    
    
    for( ;fatorial >= 1; fatorial --)
    {
        resultado = resultado * fatorial;
        
    }

        printf("Resultado:%i", resultado);
}