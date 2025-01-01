                         //BCT Lecture 25
                         // Pointer in C

                                /* W3 school
 A pointer is a variable that stores the memory address of another variable as its value.

  A pointer variable points to a data type (like int) of the same type, and is created with the * operator. */

  /* Example:
         int x;
          x = 10;
           printf("%d",x);
            output:10

            printf("%p",&x); // for Address.
              output:0x7ffee350ca28       */


                    /*Pointer Variable


            int x;
             x=10;

              int *ptr; // use * to declare a pointer type variable.
               ptr = &x;

                 printf("%d",x);
                 output:10
                  printf("%p",&x);
                  output:0x7ffee350ca28
                   printf("%p",ptr);
                   output:0x7ffee350ca28 */


                  /* use pointer variable values


            char ch ='a';

             char*ptr;
             ptr = &ch;

             printf("%c",ch);
             output:a
              printf("%c",*ptr);// for the variable value..
              output:a


        int x=10,y=20;
        int *ptr1,*ptr2;

         ptr1=&x;
         ptr2=&y;

        int sum;
        sum= *ptr1 + *ptr2;
         printf("sum:%d",sum);
         output:sum:30         */


       #include<stdio.h>
         int main(){


     /* int x = 10;
       int *p;

        p = &x;
        printf("value of x:%d\n",x);
        printf("value of x:%d\n",*p);


    char A = 'y';
    char *ptr;

    p = &A;
        printf("value of A:%c\n",A);
         printf("value of A:%c\n",*p); */


    int x,y,z;
     x=10;
     y=20;
     z=30;

      int *p1,*p2,*p3;
       p1 = &x;
       p2 = &y;
       p3 = &z;

    if(*p1 > *p2 && *p1 > *p3){
        printf("The largest number is: %d\n",*p1);
    } else if (*p2 > *p1 && *p2 > *p3){
         printf("The largest number is: %d\n",*p2);
    }else {
        printf("The largest number is: %d\n", *p3);

    }

   return 0;

         }
