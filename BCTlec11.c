                    //BCT Lecture 11
                     //LOOP: for loop

         /* for(initialization; Condition; increment/decrement){
               //code to execute......
          } */

       /* for example:
                        int i;
                        for(i=1;i<=3;i++){
                            printf("Let me go!\n");
                        } */

      #include<stdio.h>
         int main(){

   /* int a;
      for(a=1;a<=5;a=a+1){
        printf("*\n");
      }
      for (a=1;a<=10;a=a+4){//a=1,true
         printf("sohan\n"); //a=1+4=5,true
      }                     //a=5+4=9,true
                            //a=13,false */

       /* int i;
         for (i=1;i<=3;i++){
           // printf("HI\n");
             printf("%d\n",i);// i er value ...
         } printf("Out of loop!\n"); */


       /* int i;
         for(i=2;i<=100;i=i+2){ // Only EVEN numbers....[i=2,for Even]
           printf("%d\n",i);
         }

          for(i=1;i<=100;i=i+2){ // Only ODD numbers..[i=1,for ODD]
            printf("%d\n",i);
          } */


         /*  int i;
         for (i=3;i>=1;i--){
            printf("*\n");
            printf("**\n");
            printf("***\n");
         } */

      /*  for(i=10;i>=-2;i=i -3){
             printf("*\n");
            printf("**\n");
            printf("***\n");
        } */

      /* for (i=1;i<=5;i--){ // infinite loop ,,,work in wrong condition..
            printf("Hi\n");
        } */


                    //Problems..

                     // 01

    /* int i;
      for (i=100;i>=0;i=i-10){
        printf("%d\n",i);
      } */


                    // 02

         int i,sum=0;

          for(i=30;i<=120;i++){
            if(i % 3 == 0 && i % 5 == 0){
                sum=sum + i;
            }
          }

            printf("summation: %d\n",sum);


 return 0;
          }
