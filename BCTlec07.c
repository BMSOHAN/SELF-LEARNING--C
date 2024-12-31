              //BCT Lecture 07
                 //condition: if & else....

          /* if(condition){
            //if the condition is true...
              //then these statements will work...
           }

             example: int x = 5; //['='one Equal mean normal assingment operator]
                       if (x==5){  //['=='Two Equal means condition check...(Relational Operator)]// Dui pasher value soman(equal)kina...
                         printf("Value of x is 5.");
                       } */



       #include<stdio.h>
         int main(){



   /* int x;
     x=200;
     if (x>50){
         printf("Hi!\n");
           printf("Hello!");

     } */


  /* int x;
    x = 25;

     if (x>10 && x<100){  //using 'and'....
         printf ("SOHAN\n");
           printf("the value of x is greater than 10 and lower than 100 & Condition is TRUE..");

     } */



     /* int x;
        x = 250;

     if (x>10 || x<100){ //using 'or' .....
         printf ("SOHAN\n");
           printf("USED THE 'or' CONDITION.. ");

     } */


     /* char my_char = 'H'; //using character in if condition...

        if (my_char == 'H'){
            printf("HI SOHAN...\n\t");
             printf("THE MEMORY SAVED THE 'char' value..");

        } */


                                //Else Condition............


    /* if (condition){
         // if the condition is true...(TRUE)
           // then the statements will work...
       }
         else { //use second bracket'{}'...
            // if the condition is false...(FALSE)
              // Then these statements will work....,,,,
         }



 Example :    int x = 5;
                if (x > 10){ //FALSE condition...

                   printf("SOHAN first condition...");

                  } else { // if the condition is false...(if FALSE)

                       printf("SOHAN second condition..,,");// Then these statement will work....,,,,(WILL WORK).

                        } */




                  /*   int ticket_price = 500;

             if (ticket_price < 500){
                printf("THEN I WILL GO...");
              }
               else {
                printf("I will not goooo..");
               } */

                  /*  if (ticket_price <= 500){ //using <=...
                printf("THEN I WILL GO..."); // then this is true..
              }
               else {
                printf("I will not goooo..");
               } */


            // == 0 (Even) OR == 1 (Odd) REMAINDER(Vagsesh)............



               /* int a;
                 printf("Enter the value of a :\n");
                  scanf("%d",&a);

                  // 3 || 5 ...we will divide 'a' value with 3 & 5 ... then we will find the Remainder with mod (&)...


              if (a % 3 == 0 || a % 5 == 0)//using 'or'condition work for both EVEN & ODD..
                {
                printf(" The number is divisible by 3 or 5.");
              } else {
                  printf("The number is not divisible by 3 or 5.");
              } */




          /*  // Problem 01....[EVEN or ODD]

        int input;
          printf("enter the value:\n");
            scanf ("%d",&input);//No need to use'\n'for one input only...
           if (input %2 == 0){ // ***main condition***...
             printf("The value is Even\n");

           } else {
               printf("The value is Odd.");

           } */



                // PROBLEM 02....[VOWEL or CONSONANT]
                     //VOWEL = a,e,i,o,u.
               char x;
           printf("Enter the small letter alph:");
              scanf("%c",&x);
               if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){// ***main condition***...
                 printf("The alph is VOWEL");
               }
                  else {
                    printf("The alph is CONSONANT");
                  }



     return 0;

         }
