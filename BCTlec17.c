                   //BCT Lecture 17
                    //Array Introduction

      /*  Declaration of Array in C:

          DataType Array_Name[Array_size];

             Array is Zero indexed.

        int x;
        int [3];

        float cgpa;
        float cgpa[5];

         x[3]=x[0],x[1],x[2]

          int a[100]=a[0],a[1],a[2],a[3],...........,a[99]


          Array per cell works like independent variable.*/



  #include<stdio.h>
    int main(){

  /* int a[3];

    a[0]=3;
    a[1]=4;
    a[2]=400;

     int x= a[0] + a[2];

      printf("%d\n",x);


    int a[5]={8,7,6,5,4}; // index 0,1,2,3,4

      printf("value of index 0: %d\n",a[0]);
      printf("value of index 3: %d\n",a[3]);*/

    int a[5]={12,11,13,20,32};

      int i;
       for(i=0;i<5;i++){

         printf("%d\n",a[i]);

       }


   return 0;


          }
