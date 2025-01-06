                    // BCT LECTURE 29
                    // File Advanced (Complete)

    #include<stdio.h>
     int main(){

 /*
  FILE *fp;
   fp = fopen("data.txt", "r");
// Read all data from a file...
   int c;
   while (1){

    c = fgetc(fp);
    if(c == EOF){
        break;
    }

    printf("%c",c);
   } */

// Count the Vowel,Consonant, and Spaces......
   /* int c;
    int cCounter = 0, vCounter = 0, sCounter = 0;
   while (1){

    c = fgetc(fp);
    if(c == EOF){
        break;
    }
      if(c == 32 || c == 10){
        sCounter++;
      } else if(c == 'a' ||c == 'e' || c=='i'||c=='o'||c=='u'){

           vCounter++;
      }else if(c == 'A' ||c == 'E' || c=='I'||c=='O'||c=='U'){

           vCounter++;
      } else {

           cCounter++;
      }

   }

    printf("Vowels: %d\n", vCounter);
    printf("Consonant: %d\n", vCounter);
    printf("Space and Newline: %d\n", sCounter); */

// Donation List................

    FILE *fp;
   fp = fopen("donation.txt", "w+");

   char name[30];
   int donation = 0, i;


   for (i = 0; i < 5; i++){
      printf("please,Enter your name:\n");
      scanf("%s",name);

      printf("Enter amount:\n");
      scanf("%d", &donation);

      fprintf(fp, "%s %d\n", name, donation);

   }

  return 0;
    }
