#include <stdio.h>

int main()  {
 char list[10], conso[10];
 int consoante;
 int cont, co = 0; 
 
    for (cont = 0; cont < 9; cont++){
       printf("Digite uma letra maiuscula:\n");  
        scanf("%s",&list[cont]);
      
     if (list[cont] == 'A' || list[cont] == 'E' || list[cont] == 'I' || list[cont] == 'O' || list[cont] == 'U')
      {
        
      }   
     
     else
      {
         conso[co] = list[cont];
         co++;
      }
    }
    printf("imprimindo as consoantes:\n");
    for(cont = 0; cont <co; cont++)
    {
        printf("%c\n", conso[cont]);
    }
} 