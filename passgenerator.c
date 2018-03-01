#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char* argv[])
{
  char* password;
  char ch;
  int chars, aux;
  
  /* Input */
  printf("How many chars do you want for your password?\n >");
  scanf("%d",&chars);
  
  /* Processing */
  srand(time(NULL)); /* seed */
  for(aux=0; aux < chars; aux++)
    password[aux] = (char) (rand() % 255);
  
  printf("Sua senha: %s\n",password);
}
