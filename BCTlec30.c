                    //BCT LECTURE 30
                  // C Header Files and #define

/*  A header file is a file with extension **.h** which contains C function declarations and
macro definitions to be shared between several source files.There are two types of Header files:
The files that the programmer writes and The files that comes with your compiler.
  Example: #include<stdio.h>            #include"my_header_file.h"      */

/*  my_header_file.h :-// Alada vabe file khulte hobe (.h) diye.

#define ID 20
#define NAME "SOHAN"

  void add(int a, int b){

     int x = a+b;
     printf("%d + %d = %d\n", a, b,x);
  } */

  #include<stdio.h>
  #include"my_header_file.h"

   int main(){

   add(10,50);
    printf("id = %d\n", ID);
    printf("Name from header file:%s\n", NAME);

return 0;

   }
