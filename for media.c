#include <stdio.h>

int main()  {
  float nota, media, loop; 
    for (loop = 0; loop < 4; loop++ )  {
      printf("Digite uma nota: ");/* a variavel de controle do for 'scan' dentro do 'list' é para atribuir a posição do valor dentro da 'list' */  
      scanf ("%f", &nota);
      
      media = media + nota;
    }
    printf("Sua media é: %.2f ",media/loop );
return 0;}