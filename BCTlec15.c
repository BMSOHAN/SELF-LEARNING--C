                         //BCT Lecture 15
                          //Break and Continue in Loop
 #include<stdio.h>
         int main(){


       /*  int i;
               for (i=0;i<3;i++){
                 printf("Sohan\n");
                if(i==1)
                  break;//**
                   printf("Hello\n");
               }
                // outer of loop

             int i;
               for (i=0;i<3;i++){
                 printf("Sohan\n");
                if(i==1)
                  continue;//Return to the condition (i=2).
                   printf("Hello\n");//(print for only for 0 and 2).
               }
                // outer of loop */

       /* int i;
         for(i=1;i<=3;i++){
            printf("sohan\n");
            if(i==2)
             break;
            printf("*\n");
            printf("* *\n");
         } */
       int i;
        for(i=1;i<=10;i++){
            if(i % 2 == 0)
             continue;
             printf("%d\n",i);

        }

 return 0;

         }
