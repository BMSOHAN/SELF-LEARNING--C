                         //BCT Lecture 26
                         // Pointer - Dynamic Memory Allocation


               /*W3 school...

                                            Memory in C

Understanding how memory works in C is important. When you create a basic variable, C will automatically reserve space for that variable. An int variable for example, will typically occupy 4 bytes of memory, while a double variable will occupy 8 bytes of memory.

You can use the sizeof operator to find the size of different types:

Example::-
int myInt;
float myFloat;
double myDouble;
char myChar;

printf("%lu\n", sizeof(myInt));      // 4 bytes
printf("%lu\n", sizeof(myFloat));    // 4 bytes
printf("%lu\n", sizeof(myDouble));   // 8 bytes
printf("%lu\n", sizeof(myChar));     // 1 byte


                                        Dynamic Memory

Dynamic memory is memory that is allocated after the program starts running. Allocation of dynamic memory can also be referred to as runtime memory allocation.

Unlike with static memory, you have full control over how much memory is being used at any time. You can write code to determine how much memory you need and allocate it.

Dynamic memory does not belong to a variable, it can only be accessed with pointers.

To allocate dynamic memory, you can use the malloc() or calloc() functions. It is necessary to include the <stdlib.h> header to use them. The malloc() and calloc() functions allocate some memory and return a pointer to its address.

int *ptr1 = malloc(size);
int *ptr2 = calloc(amount, size);


The malloc() function has one parameter, size, which specifies how much memory to allocate, measured in bytes.

The calloc() function has two parameters:

amount - Specifies the amount of items to allocate
size - Specifies the size of each item measured in bytes
Note: The data in the memory allocated by malloc() is unpredictable. To avoid unexpected values, make sure to write something into the memory before reading it.

Unlike malloc(), the calloc() function writes zeroes into all of the allocated memory. However, this makes calloc() slightly less efficient. */



       /* 4 types Library fuctions provided under <stdlib.h> header file:

        -malloc() [memory allocate kora]         -free() [free kora]

        -calloc() [memory allocate kora]         -realloc() [Re-allocate kora]


    malloc():"malloc" or "memory allocation" dynamically allocates a single large block of memory with the specified size.

                                ptr = (cast-type*)malloc(byte-size);


    calloc():"calloc" or "contiguous allocation" dynamically allocates the specified number of blocks of memory of the specified type.

                                ptr = (cast-type*)calloc(n,element-size);

    free():"free" method in C is used to dynamically de-allocate the memory.


    realloc():"realloc" or "re-allocation" dynamically changes the memory allocation of a previously allocated memory.

                                ptr = realloc(ptr,newsize); */



      #include<stdio.h>
      #include<stdlib.h>
      int main(){


    /*  int *ptr;
      // ptr = (int *)malloc(5 * sizeof(int));// or (int *)malloc(20);

      ptr = (int *)calloc(5, sizeof(int));
         if (ptr == NULL){
            printf("Memory not allocated.\n");
         } else{
             printf("Memory allocation successful.\n");

             // do your work
              free(ptr);
              printf("Memory freed successfully.\n");

            } */


    int *ptr1, *ptr2;
    ptr1 = (int *)malloc(20);
    ptr2 = (int *)calloc(5, sizeof(int));

      if (ptr1 == NULL || ptr2 == NULL){
            printf("Memory not allocated.\n");
         } else{
             printf("Memory allocation successful.\n");
             ptr1 = realloc(ptr1, 50);
             printf("Memory reallocation successful.\n");

         }

   return 0;

      }

      // Difference between malloc() & calloc(): malloc():we'll get segmentation fault error (or maybe garbage values),calloc():we'll get 0.

