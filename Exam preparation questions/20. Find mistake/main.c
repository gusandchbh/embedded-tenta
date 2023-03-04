#include<stdio.h> //Used to include basic c library files

// int sum(int, int); Needs to have this function declaration

void main() //best practice for main method is to have int and not void
{

    int a=100;
    int b=200;

    //displaying the output
    printf("Sum of %d and %d is=%d\n",a,b,sum(a,b));
}


int sum(int a, int b)
{
    return a*b; // should be a + b
}