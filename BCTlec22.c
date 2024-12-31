                //BCT Lecture 22
                 // String in C



   // string- A sequential collection of characters or a character Array terminated
     //         by a *Null character('\0')*.

            // use Double quotation " "
                // str means string.
      /*  char name[] = "Sohan"; // Double quotation
            printf("%s", name); // Percentages of S (string).

        in memory its save : 'S' 'o' 'h' 'a' 'n' '\0'


         char my_string[50]; //Capacity of storing 49 characters plus null char.

           for scan .... scanf("%s",my_string); or //  "&" sign use korle o hoi na korle o hoi.
                            gets(my_string); */


     #include<stdio.h>
        int main (){

     /* char a[]= {'1','2','a','b','\0'};
       char b[]= "sohan.c";
        printf("%s\n",a);
         printf("%s\n",b);

      char name[20];
       printf("Enter your Name:\n");
       // scanf("%s",&name);
            gets(name); // for scan also(string).

          printf("%s\n",name); */

                // Problems.......................................


    char name[30];
     printf("Enter your name:\n");
      scanf("%s", name);

      int i = 0, counter = 0;
       while (name[i]!= '\0'){
            counter++;
            i++;
       }
            printf("Length of name is :%d\n", counter);



    return 0;


        }

         /*           .....W3school.....
                       Access Strings

Since strings are actually arrays in C, you can access a string by referring to its index number inside square brackets [].

This example prints the first character (0) in greetings:

Example-

char greetings[] = "Hello World!";
printf("%c", greetings[0]);
Note that we have to use the %c format specifier to print a single character.

                             Modify Strings
  To change the value of a specific character in a string, refer to the index number, and use single quotes:

Example-
char greetings[] = "Hello World!";
greetings[0] = 'J';
printf("%s", greetings);
// Outputs Jello World! instead of Hello World!

                  *Loop Through a String*
You can also loop through the characters of a string, using a for loop:

Example-
char carName[] = "Volvo";
int i;

for (i = 0; i < 5; ++i) {
  printf("%c\n", carName[i]);
}
And like we specified in the arrays chapter,
 you can also use the sizeof formula (instead of manually write the size of the array in the loop condition (i < 5)) to make the loop more sustainable:

Example-
char carName[] = "Volvo";
int length = sizeof(carName) / sizeof(carName[0]);
int i;

for (i = 0; i < length; ++i) {
  printf("%c\n", carName[i]);
}
                Another Way Of Creating Strings
In the examples above, we used a "string literal" to create a string variable. This is the easiest way to create a string in C.

You should also note that you can create a string with a set of characters. This example will produce the same result as the example in the beginning of this page:

Example-
char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
printf("%s", greetings);
Why do we include the \0 character at the end? This is known as the "null terminating character", and must be included when creating strings using this method. It tells C that this is the end of the string.

                                #Differences
The difference between the two ways of creating strings, is that the first method is easier to write, and you do not have to include the \0 character, as C will do it for you.

You should note that the size of both arrays is the same: They both have 13 characters (space also counts as a character by the way), including the \0 character:

Example-
char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
char greetings2[] = "Hello World!";

printf("%lu\n", sizeof(greetings));   // Outputs 13
printf("%lu\n", sizeof(greetings2));  // Outputs 13
Real-Life Example
Use strings to create a simple welcome message:

Example-
char message[] = "Good to see you,";
char fname[] = "John";

printf("%s %s!", message, fname);

*/
