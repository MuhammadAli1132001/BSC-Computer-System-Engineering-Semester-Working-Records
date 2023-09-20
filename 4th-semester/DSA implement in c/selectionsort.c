# include <stdio.h>
# include <pthread.h>

void * thread_sum(void *);
int TotalSum=0;
pthread_mutex_t mVar=PTHREAD_MUTEX_INITIALIZER;

main()
{
    int iNumber=100,iCount;
    pthread_t tid;
    //first thread
    pthread_create(&tid,NULL,thread_sum,(void *)&iNumber);   //sum from 10 to 100 by each thread
    for(iCount=10;iCount<=iNumber;iCount=iCount+1)
    {
        pthread_mutex_lock(&mVar);
        TotalSum=TotalSum + iCount;
        pthread_mutex_unlock(&mVar);
    }

    pthread_join(tid,NULL);

    printf("Final Sum by first thread is : %d \n",TotalSum);

//second thread
int i2Count;
pthread_create(&tid,NULL,thread_sum,(void *)&iNumber);
    for(i2Count=10;i2Count<=iNumber;i2Count=i2Count+1)
    {
        pthread_mutex_lock(&mVar);
        TotalSum=TotalSum + i2Count;
        pthread_mutex_unlock(&mVar);
    }

    pthread_join(tid,NULL);

    printf("Final Sum by second thread is : %d \n",TotalSum);

//third thread
int i3Count;
pthread_create(&tid,NULL,thread_sum,(void *)&iNumber);
    for(i3Count=10;i3Count<=iNumber;i3Count=i3Count+1)
    {
        pthread_mutex_lock(&mVar);
        TotalSum=TotalSum + i3Count;
        pthread_mutex_unlock(&mVar);
    }

    pthread_join(tid,NULL);

    printf("Final Sum by third thread is : %d \n",TotalSum);

//fourth thread
int i4Count;
pthread_create(&tid,NULL,thread_sum,(void *)&iNumber);
    for(i4Count=10;i4Count<=iNumber;i4Count=i4Count+1)
    {
        pthread_mutex_lock(&mVar);
        TotalSum=TotalSum + i4Count;
        pthread_mutex_unlock(&mVar);
    }

    pthread_join(tid,NULL);

    printf("Final Sum by fourth thread is : %d \n",TotalSum);

//  fifth thread
int i5Count;
pthread_create(&tid,NULL,thread_sum,(void *)&iNumber);
    for(i5Count=10;i5Count<=iNumber;i5Count=i5Count+1)
    {
        pthread_mutex_lock(&mVar);
        TotalSum=TotalSum + i5Count;
        pthread_mutex_unlock(&mVar);
    }

    pthread_join(tid,NULL);

    printf("Final Sum by fifth thread is : %d \n",TotalSum);

//  sixth thread
int i6Count;

pthread_create(&tid,NULL,thread_sum,(void *)&iNumber);
    for(i6Count=10;i6Count<=iNumber;i6Count=i6Count+1)
    {
        pthread_mutex_lock(&mVar);
        TotalSum=TotalSum + i6Count;
        pthread_mutex_unlock(&mVar);
    }

    pthread_join(tid,NULL);

    printf("Final Sum by sixth thread is : %d \n",TotalSum);

//    seventh thread
int i7Count;
pthread_create(&tid,NULL,thread_sum,(void *)&iNumber);
    for(i7Count=10;i7Count<=iNumber;i7Count=i7Count+1)
    {
        pthread_mutex_lock(&mVar);
        TotalSum=TotalSum + i7Count;
        pthread_mutex_unlock(&mVar);
    }

    pthread_join(tid,NULL);

    printf("Final Sum by seventh thread is : %d \n",TotalSum);

//    eighth thread;
int i8Count;
pthread_create(&tid,NULL,thread_sum,(void *)&iNumber);
    for(i8Count=10;i8Count<=iNumber;i8Count=i8Count+1)
    {
        pthread_mutex_lock(&mVar);
        TotalSum=TotalSum + i8Count;
        pthread_mutex_unlock(&mVar);
    }

    pthread_join(tid,NULL);

    printf("Final Sum by eighth thread is : %d \n",TotalSum);

//ninth thread
int i9Count;
pthread_create(&tid,NULL,thread_sum,(void *)&iNumber);
    for(i9Count=10;i9Count<=iNumber;i9Count=i9Count+1)
    {
        pthread_mutex_lock(&mVar);
        TotalSum=TotalSum + i9Count;
        pthread_mutex_unlock(&mVar);
    }

    pthread_join(tid,NULL);

    printf("Final Sum by ninth thread is : %d \n",TotalSum);

//    tenth thread
int i10Count;
pthread_create(&tid,NULL,thread_sum,(void *)&iNumber);
    for(i10Count=10;i10Count<=iNumber;i10Count=i10Count+1)
    {
        pthread_mutex_lock(&mVar);
        TotalSum=TotalSum + i10Count;
        pthread_mutex_unlock(&mVar);
    }

    pthread_join(tid,NULL);

    printf("Final Sum by tenth thread is : %d \n",TotalSum);

}

void *thread_sum(void *no)
{
    int *iNumber,iCount;
    iNumber=(int*)no;

    for(iCount=2;iCount<=*iNumber;iCount=iCount+1)
    {
        pthread_mutex_lock(&mVar);
        TotalSum=TotalSum + iCount;
        pthread_mutex_unlock(&mVar);
    }
    pthread_exit(NULL);
}
