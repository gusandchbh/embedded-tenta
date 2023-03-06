# Development of embedded and Real-Time Systems

## 1. Please explain the concepts of stack and heap in a program.

In computer programming, a stack and a heap are both memory management techniques used to allocate and deallocate memory for data storage during program execution. However, they differ in the way they operate and the types of data they store.

Stack

A stack is a data structure that stores data in a last-in-first-out (LIFO) manner. It is typically used for storing temporary data such as function parameters, local variables, and return addresses. When a function is called, the parameters and local variables are pushed onto the stack, and when the function returns, they are popped off the stack.

The stack is usually a fixed-size memory region, allocated by the operating system when the program is started. The size of the stack is determined by the compiler based on the maximum stack depth needed by the program.

One advantage of using a stack is that it is very efficient and fast. Because it uses a LIFO ordering, the memory access pattern is predictable, which allows for fast memory accesses. Additionally, since the stack size is fixed, it is very easy to manage and avoid memory leaks.

Heap

The heap, on the other hand, is a region of memory used for dynamic memory allocation. It is typically used for storing large data structures, such as arrays and objects, whose size cannot be determined at compile time.

Unlike the stack, the heap is not organized in any specific order, and data can be allocated and deallocated in any order. The memory used by the heap is managed by the program itself, which means that the programmer must explicitly allocate and deallocate memory using functions like malloc and free.

One disadvantage of using the heap is that it is slower than the stack. Because the memory access pattern is unpredictable, it can lead to cache misses, which can slow down the program. Additionally, if the program is not careful, it can easily lead to memory leaks or buffer overflows, which can cause crashes or security vulnerabilities.

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
