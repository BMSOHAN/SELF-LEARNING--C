                //BCT Lecture 023
                 // String Function in C
                  //strlen(),strcpy(),strcmp(),strcat()

    /*  ...............Built in String functions in *string.h*..................


   ☢ int strlen(char *string);            ☢ char *strcpy(char*dest,char *src);
     -Determine the length of a string         -copy source string into destination string


   ☢ int strcmp(char*s1,char *s2);          ☢ char*strcat(char*s1,char*s2);
      -compare string one and string two         -Concatenate string s2 to string s1
                                                   ( jora lagai)    */


#include<stdio.h>
#include<string.h>
 int main(){
   char a[]= "Hello, ";//7 (space count kore).
    char b[]= "World!";
      int l = strlen(a);
      int sz = strlen(b);
       printf("Length of your string is :%d\n", l);
       printf("Length of your string is :%d\n", sz);

      strcat(a,b);
       printf("%s\n",a); // using % of s
       printf("%s\n",b);
       printf("%s\n",a,b);

    /* strcpy(a,b);
      printf("Value of a is :%s\n",a);
      printf("Value of b is :%s\n",b); */

    int x = strcmp(a,b);
     if(x==0){
        printf("a and b is equal.\n");
     } else{
            printf("a and b is not equal.\n");
     }

    return 0;
       }

