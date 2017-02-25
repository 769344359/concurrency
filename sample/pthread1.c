#include<stdio.h>
#include<pthread.h>

typedef  void*(* runPoint)(void *)    ;

static   void * run(void * arg){
printf(" hello world ");
return 0;
}


int main(int argc , char ** argv){
       
        runPoint  rp  =  run;
        pthread_t  pt ;
	int  tem  = pthread_create(&pt ,0 , rp ,0 );
          pthread_join(pt,NULL);
   
	return 0;
}
