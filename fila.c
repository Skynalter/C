#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

#define N 100

struct fila{
  int inicio;
  int fim;
  int vet[N];
};


int incr(int i)
{
  return(i+1)%N;
}


Fila* cria()
{
  Fila* f = (Fila*)malloc(sizeof(Fila));
  f->inicio = f->fim = 0;
  return f;
}

void insere(Fila* f, int element)
{
  if(incr(f->fim) == f->inicio)
  {
    printf("CAPACIDADE DA FILA ESGOTADA.\n");
    exit(1);
  }
  f->vet[f->fim] = element;
  f->fim = incr(f->fim);
}

int retira(Fila* f)
{
  int temp;
  if(vazia(f))
  {
    printf("LISTA VAZIA.\n");
    exit(1);
  }
  temp = f->vet[f->inicio];
  f->inicio = incr(f->inicio);
  return temp;
}

int vazia(Fila* f) 
{
  return(f->inicio == f->fim);
}

void libera(Fila* f)
{
  free(f);
}

void imprime_fila(Fila* f)
{
  int i;
  for(i = f->inicio; i != f->fim; i = incr(i))
  {
    printf(" %d ",f->vet[i]);
  }
  printf("\n");
}