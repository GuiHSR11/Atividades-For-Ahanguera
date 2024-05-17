#include <stdio.h>

int main()
{
   int par[5] = {}, impar[5] = {},lista[5] = {}, controle;
   int pa = 0, in = 0;
   
   for(controle = 1; controle < 6; controle++)
   {
       printf("Digite o %d numero:\n", controle);
       scanf("%i", &lista[controle]);
   }
   
   for( controle = 0; controle < 5; controle++)
   {
       if(lista[controle] % 2 == 0)
       {
           par[pa] = lista[controle];
           pa++;
       }
       else
       {
           impar[in] = lista[controle];
           in++;
       }
   }
   
   printf("Todos os valores: \n");
   for(controle = 1; controle < 6; controle++)
   {
       printf("%d\n",lista[controle]);
   }
   
   printf("Numeros pares \n");
   for(controle = 1; controle < pa; controle++)
   {
       printf("%d \n",par[controle]);
   }
   
   printf("Numeros impares\n");
   for(controle = 0; controle < in; controle++)
   {
       printf("%d\n", impar[controle]);
   }
}