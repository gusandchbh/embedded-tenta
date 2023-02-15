#include <stdio.h>

void swap2(int* x,int* y);

//    int *aPointer = &a;
//    printf("%p\n", aPointer);
//    printf("%p\n", &a);
int main() {
    int a = 10;
    int b = 20;
    printf("A = %d\n", a);
    printf("B = %d\n",b);
    swap2(&a,&b);
    printf("AFTER SWAP!\n");
    printf("A = %d\n", a);
    printf("B = %d\n",b);
    return 0;
}

void swap2(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
