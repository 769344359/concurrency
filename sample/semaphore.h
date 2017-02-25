

#ifndef   DINOSAUR_SEM
#define   DINOSAUR_SEM
#include <stdlib.h>
#include <pthread.h>
typedef  struct {
pthread_mutex_t  mutex ;
int value ;

}   di_sem_t ;


int  di_sem_init(di_sem_t  * , int value);
int  di_sem_wait(di_sem_t *);
int  di_sem_post(di_sem_t *);
int  di_sem_destory(di_sem_t *);
#endif 

