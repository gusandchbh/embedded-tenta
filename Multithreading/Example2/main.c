#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <stdlib.h>

// This function returns a void pointer and takes a void pointer as an argument
// The reason it does this is because it's generic, a void pointer can point to anything
// This means we can return any datatype and pass any datatype to the thread function
void* thread_func(void *arg){
    int *iptr = (int *) malloc(sizeof(int));
    *iptr = 5;
    for (int i = 0; i < 8; i++)
    {
        sleep(1);
        printf("My turn! %d %d\n", i, *iptr);
        *iptr = *iptr +1;
    }
    return iptr;
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
    int *result;
    pthread_create(&newthread, NULL, thread_func, NULL);
    yourturn();
    pthread_join(newthread, (void*) &result);
    printf("thread's done: result = %d\n", *result);
    return 0;
}
