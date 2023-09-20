#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

void *threadfunction(void *argument);
int num[3]={1,2,3};

int main(void *argument)
{
        pthread_t   thread;
        int   ret;
        void *result;
   // for(int j=1; j<=10; ++j){
        ret=pthread_create(&thread, NULL, (void *)threadfunction,(void*)num );
       // if (ret < 0)
        //    printf("Thread Creation Failed\n");
          //  return 1;
          pthread_join (thread,&result);  /* Parent waits for  */
          printf("Parent is continuing....\n");
        //  }
return 0;
}
void *threadfunction(void *argument)
{
      int i,sum;
      int *x=argument;
      for ( i =0; i <3; i++ ){
      sum=x[i]+x[i+1];
}

    printf(" sum = %d\n",sum );
    pthread_exit("sum calculated");
}
