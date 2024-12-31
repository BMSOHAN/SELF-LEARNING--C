            //BCT Lecture 14
             // Nested Loop (work for both loops)
     // Ekta Loop er vitor R Ekta loop thakle taake Nested Loop bole.

          /*For examle:
                          int i,j;
                              for(i=1;i<=3;i++){
                                printf("This is our Outter loop");

                                 for(j=1;j<=2;j++){
                                    printf("This is our inner loop");
                                 }
                              } */

     #include<stdio.h>
        int main (){


   /* int i,j;

           for(i=1;i<=2;i++){
             printf("Outer loop start\n");
               for (j=1;j<=3;j++){
                printf("****** inner Loop *********inner loop..\n");
               }
               printf("Outer loop END\n");
           }


       int i,j,k;

           for (i=1;i<=2;i++){//2 times
                    //....2 times exe..
            for(j=1;j<=3;j++){// 3 times
                   //....2*3 = 6 times exe..
                for(k=1;k<=5;k++){// 5 times
                    printf("sohan\n");// 2*3*5 times [30 times]
                }
            }
           } */

                    // problem 01 ********

     /*   int i,j; //i=lines.

           for(i=1;i<=5;i++){//5..
            for (j=1;j<=i;j++){ // i times,,****...
                printf("* ");
            }
              printf("\n");
           } */

                    // problem 02..
        int i,j;

          for(i=1;i<=5;i++){
             for(j=i;j<=5;j++){// i..5
                printf("* ");
             }
            printf("\n");
          }



  return 0;
        }
