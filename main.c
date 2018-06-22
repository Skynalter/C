#include <stdio.h>
#include <stdlib.h>
#include "fila_encad.h"

int main() 
{
  Fila* f = cria();
  insere(f,1);
  insere(f,2);
  insere(f,3);
  insere(f,4);
  insere(f,5);
  insere(f,6);
  insere(f,7);
  imprime_fila(f);
  retira(f);
  imprime_fila(f);

return 0;
}