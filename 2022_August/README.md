# Development of embedded and Real-Time Systems

## 1 Stack and heap
1. Please explain the concepts of stack and heap in a program.
2. What does it mean that a variable is placed in a memory on the stack?
3. What does it mean that a variable is planed in a memory on the heap?
4. How do we define and allocate memory for a variable of type int on the stack?
5. How do we define and allocate memory for a variable of type in on the heap?
6. What can we do with the allocated memory on the heap, that we cannot do with the memory on
the stack?

## 2 Reading pointers
Please choose the right interpretation of "X" in each of the statements:
```
int *x();
int ( * x [] ) ();
char * ( * ( * x [ ] [8] ) ( ) ) [ ];
int ( * ( * x ) [ ] ) ( );
char ( * * x ( ) ) [20];
```
x is a pointer to a function that returns an int
x is a function that returns a pointer to an int
x is a variable of type int
x is a pointer to a pointer to a function that returns a variable of type int

x is an array of pointers to functions that return int
x is a function which takes as an argument an array of pointers to variables of type int
x is a function that takes an array as an argument and returns a pointer to int
x is a pointer to a function that takes as an argument an array of integers

x is array of array of 8 pointers to a pointer to functions returning pointer to array of pointerto char
x is an array of 8 pointers to pointer to function returning pointer to array of pointer to char
x is array of array of 8 pointers to a function returning pointer to array of pointer to char
x is a function that takes as input an array of 8 pointers to pointer to an array and returns apointer to array of pointer to char

x is an array of pointers to functions that take no arguments and return pointers to int
x is a function that takes as argument an array of pointers to functions and return a pointerto int
x is a function that takes as an argument a pointer to an array of pointers and returns apointer to int
x is a pointer to an array of pointers to functions returning an int

x is an array of pointers to functions returning pointers to functions returning pointers tochar
x is a pointer to a function returning a pointer to an array of 20 elements of type char
x is a function returning a pointer to a pointer to an array of 20 elements of type char
x is an array of 20 pointers to functions returning char