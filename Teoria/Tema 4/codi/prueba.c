#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int global;

void *funcion(int *a){
    global = 2;
  return ((void *)0);
}

void main(void){
int pipo;
    pthread_t ntid;
    global = 0;
    

    pipo = pthread_create(&ntid, NULL, &funcion, global);
    if (global == 0){
        global = 1;
    }
    printf("%d\n",global);
    
    pthread_join(ntid,NULL);
}
