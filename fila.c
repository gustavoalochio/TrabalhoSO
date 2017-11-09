#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"fila.h"

typedef struct elem{
  int info;
}tipo_elem;

typedef struct{
  tipo_elem *inicio;
  tipo_elem *fim;
}Fila;


Fila* definir(){
  /*Cria uma fila vazia. Deve ser usado antes de qualquer
  outra operação*/
  Fila* q = malloc(sizeof(Fila));

  q->inicio = NULL;
  q->fim = NULL;

  return q;
}

Fila** definirFilas(int n){
  /*Cria uma fila vazia. Deve ser usado antes de qualquer
  outra operação*/
  Fila** q = malloc(n * sizeof(Fila*));

  for(int i = 0; i < n; i++){
    q[i] = malloc(sizeof(Fila));
  }

  q->inicio = NULL;
  q->fim = NULL;

  return q;
}


boolean vazia (Fila *q){
  /*Retorna true se fila não contém elementos, false caso
  contrário*/
  return (q->inicio == NULL);
}

boolean inserir (Fila *q, int info){
/*Adiciona um item no fim da fila q. Retorna true se
operação realizada com sucesso, false caso contrário*/
  tipo_elem *p;
  p = malloc(sizeof(tipo_elem));
  if (p == NULL)
    return FALSE;

  p->info = info;
  p->lig = NULL;

  if (vazia(q))
    q->inicio = p;
  else
    q->fim->lig = p;

  q->fim = p;
  return TRUE;
}


boolean remover(Fila *q, int *info){
  /*Remove um item do início da fila q. Retorna true se
  operação realizada com sucesso, false caso contrário*/
  tipo_elem *p;

  if (vazia(q))
    return FALSE;

  p = q->inicio;
  *info = p->info;
  q->inicio = p->lig;

  if (q->inicio == NULL)
    q->fim = NULL;

  free(p);
  return TRUE;
}

int tamanho (Fila *q){
/*Retorna o tamanho da fila*/
  tipo_elem *p;
  int cont = 0;
  p = q->inicio;

  while (p != NULL){
    cont ++;
    p = p->lig;
  }
  return cont;
}

boolean começo_fila (Fila *q, int *item){
  /*Mostra o começo da fila sem remover o item. Retorna true
  se operação realizada com sucesso, false caso contrário*/

  if (vazia(q))
    return FALSE;

  *item = q->inicio->info;

  return TRUE;
}