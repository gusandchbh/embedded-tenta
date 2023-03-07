#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

// This function returns a void pointer and takes a void pointer as an argument
// The reason it does this is because it's generic, a void pointer can point to anything
// This means we can return any datatype and pass any datatype to the thread function
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
