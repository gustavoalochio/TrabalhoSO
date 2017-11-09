#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <stdbool.h>
#include <math.h>
#include "fila.h"

#define PRIMOS 10000
#define NUMTHREADS 2

int numThread = 0;
int valorLimite;
int N, M;
Fila *buffer;
Fila **buffers;
int **primos;


int sinaleiro = 1;

pthread_mutex_t mutex;


void* verificaPrimo(void *param){



  while(sinaleiro == 1 && id);
  
  pthread_mutex_lock(&mutex);

  Fila* elemento = remover(buffer,);

  if(elemento == NULL){
    printf("VAZIA\n");
  }

  pthread_mutex_unlock(&mutex);

  pthread_mutex_lock(&mutex);

  pthread_cond_wait();
  tipo_elem teste = *((tipo_elem*) param);
  buffers[id] = inserir(buffers[THREAD0], teste);
}


int main(int argc, char *argv[]) {

  //Passo 1
  //N = LIMITE DE NUMEROS
  //M = TAMANHO DO BUFFER DE COMUNICAÇÃO ENTRE THREADS 
  sscanf(argv[1],"%d",&N);
  sscanf(argv[2],"%d",&M);
  
  pthread_t worker[NUMTHREADS];
  pthread_attr_t attr;
  pthread_attr_init(&attr);

  //Passo 2 
  valorLimite = sqrt(N);
  buffer = definir();
  buffers = definirFilas(8);

  primos = definirMatriz(NUMTHREADS, PRIMOS);

  pthread_mutex_init(&(buffer->mutex), NULL);

  for(int i = 0; i < 2){
    pthread_create(&worker[i], &attr, verificaPrimo, NULL);
  }




  for(int i = 2; i <= N; i++){
    int info = i;
    int posicao = i - 2;

    pthread_mutex_lock(&mutex);
      inserir(buffer, info, posicao);
      inserir(buffers[0], info, posicao)
      sinaleiro = 0;
    pthread_mutex_unlock(&mutex);
  }

  pthread_join(worker, NULL);

  return 0;
}