#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void* thread_func(void *arg){
    for (int i = 0; i < 8; i++)
    {
        sleep(1);
        printf("My turn! %d\n", i);
    }
}

void yourturn(){
    for (int i = 0; i < 3; i++)
    {
        sleep(5);
        printf("Your turn!%d\n", i);
    }
}


int main() {
    pthread_t newthread;
    pthread_create(&newthread, NULL, thread_func, NULL);
    yourturn();
    pthread_join(newthread, NULL);
    return 0;
}
