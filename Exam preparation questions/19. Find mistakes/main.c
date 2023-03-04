#include<stdio.h>
void main()
{
    //declaring and defining the array variables
    int a[5] = {100,101,102,103,104};
    int b[5] = {105,106,107,108,109};

    //displaying the output
    printf("%d\n",a[100]); // a[100] is out of bounds

    //and another element
    printf("%c\n",b[700]); // should use %d to print integers
}