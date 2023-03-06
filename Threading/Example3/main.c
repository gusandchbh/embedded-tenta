#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

#define MAXNUMBER 30

sem_t sem1, sem2, sem3;
int counter;

void *thread1(void *arg) {
    while (1) {
        sem_wait(&sem1);
        if (counter > MAXNUMBER) {
            sem_post(&sem2);
            sem_post(&sem3);
            return NULL;
        }
        printf("thread #1: number %d\n", counter);
        counter += 3;
        sem_post(&sem2);
    }
}

void *thread2(void *arg) {
    while (1) {
        sem_wait(&sem2);
        if (counter > MAXNUMBER) {
            sem_post(&sem1);
            sem_post(&sem3);
            return NULL;
        }
        printf("thread #2: number %d\n", counter);
        counter += 3;
        sem_post(&sem3);
    }
}

void *thread3(void *arg) {
    while (1) {
        sem_wait(&sem3);
        if (counter > MAXNUMBER) {
            sem_post(&sem1);
            sem_post(&sem2);
            return NULL;
        }
        printf("thread #3: number %d\n", counter);
        counter += 3;
        sem_post(&sem1);
    }
}

int main(int argc, char **argv) {
    pthread_t t1, t2, t3;
    sem_init(&sem1, 0, 1);
    sem_init(&sem2, 0, 0);
    sem_init(&sem3, 0, 0);
    counter = 1;

    pthread_create(&t1, NULL, thread1, NULL);
    pthread_create(&t2, NULL, thread2, NULL);
    pthread_create(&t3, NULL, thread3, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    pthread_join(t3, NULL);

    sem_destroy(&sem1);
    sem_destroy(&sem2);
    sem_destroy(&sem3);

    return 0;
}
