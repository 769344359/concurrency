#include<stdio.h>
#include "semaphore.h"
#include "stdlib.h"
int di_sem_init(di_sem_t * semP, int value){
	
int state = pthread_mutex_init(&semP->mutex);
if( state ){
return state;
}
state = pthread_cond_init(&semP->cond);
if(state){
return state ;
}
semP->value =  value;
return  state ;

}

int di_sem_wait(di_sem_t * semP){

	int  state = pthread_mutex_lock(&semP->mutex);
	if(state){
	return state;
	}
	while(semP->value <0){
	state = pthread_cond_wait(&semP->cond , &semP->mutex);
	if(state){
	return state;
	}
	}
	value --;
	
	state =pthread_mutex_unlock(&semP->mutex);
	return state;


}

int di_sem_post(di_sem_t * semP){
	
}



