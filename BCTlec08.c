                // Nested if...else
                  // its need for more conditions...
                    // bcz.. 'One conditional' statement will work at a 'one time'.



         /*   if(condition 1){
                //statement 1...
            }else if (condition 2){
                //statement 2...
            }else if(condition 3){
                //statement 3..
            }else {
                //compulsory statement....
            }


    Example: char ch= 'a';
                if (ch == 'a'){
                    printf("Apple");
                }else if (ch == 'b'){
                    printf("Bat");
                }else if (ch == 'c'){
                     printf("Cat");
                }else {
                    printf ("Unknown to me!");
                } */


        //***'One conditional' statement will work at a 'one time'.



        #include<stdio.h>
          int main(){

      /*  char ch;  // Run The Example...
         printf("Enter the char:");
          scanf("%c",&ch);

                if (ch == 'a'){
                    printf("Apple");
                }else if (ch == 'b'){
                    printf("Bat");
                }else if (ch == 'c'){
                     printf("Cat");
                }else {
                    printf ("Unknown to me!");
                } */


            //,,,,,,,,,,,,,,,,,,,,,,,,,,,,//


      /*  int x;
          printf("Enter the value of x:\n");
            scanf("%d",&x);

             if(x==1){
                printf(" Hi\n");
             }else if(x==2){
                printf("\tHello\n");
             }else if (x==3){
                printf("  Bye!!!");
             }else {
                  printf("ERROR!!!");
             }*/


            //^^^Problem 01^^^//

        int age;
         printf("Enter the age :\n");
            scanf("%d",&age);

             if(age < 2){
                printf("Infant");
             }else if(age <10){
                 printf("Child!!");
             }else if(age <20){
                   printf("^^Teenager^^");
             }else if(age <30){
                    printf("**Adult**");
             }else {
                printf("$$Old$$");
             }



  return 0;


           }
