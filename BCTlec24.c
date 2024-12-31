                        //BCT Lecture 024
                         // Structure in C

/* Structures (also called structs) are a way to group several related variables into one place.
  Each variable in the structure is known as a member of the structure.
   Unlike an array, a structure can contain many different data types (int, float, char, etc...).*/

        // Jokon vibinno dhoroner data eksathe niye Object akare kaj korte hoi,tokon amra *Structure* use kori.

              // Structure Hocce ekta Complex,compound,custom  Data type.


/* You can create a structure by using the struct keyword and declare each of its members inside curly braces:

              struct MyStructure {  // Structure declaration
               int myNum;        // Member (int variable)
                char myLetter;       // Member (char variable)

                       }; // End the structure with a semicolon



        some Examples:
             struct Student{
               int id;
                char name;

                  };
    .................................

                struct Book{
                   int isbn;
                    char title;
                     char author;
                      float price;

                }; */

   /*         ,,,,,,,,,,,,,,,,,,,,,,,Declaring Structure Variables,,,,,,,,,,,,,,,,,,,,,,,,


            1st way:

                   struct Student{
                     int id;
                      char name[16];

                   } s1,s2;

           2nd Way:

                   struct Student {
                      int id;
                       char name[16];

                        };

                    int main(){
                        struct Student s1,s2;

                      }  */

    #include<stdio.h>

      struct student{
        int id;
         float cgpa;
          char name[20];

         };
                        //To access members of a structure, use the dot syntax (.)
      int main(){

            struct student s;
             printf("Enter your id:\n");
              scanf("%d" , &s.id);
             printf("Enter your cgpa:\n");
              scanf("%f", &s.cgpa);
             printf("Enter your name:\n");
              scanf("%s", s.name);

        printf("Name:%s; id: %d; cgpa: %f\n",s.name, s.id, s.cgpa);

    return 0;
      }

    /*               ......W3school.....
                              Simpler Syntax

 You can also assign values to members of a structure variable at declaration time, in a single line.

 Just insert the values in a comma-separated list inside curly braces {}.
  Note that you don't have to use the strcpy() function for string values with this technique:

Example:
// Create a structure
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

int main() {
  // Create a structure variable and assign values to it
  struct myStructure s1 = {13, 'B', "Some text"};

  // Print values
  printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

  return 0;
}
Note: The order of the inserted values must match the order of the variable types declared in the structure (13 for int, 'B' for char, etc).

                          Copy Structures

 You can also assign one structure to another.

  In the following example, the values of s1 are copied to s2:

Example:
struct myStructure s1 = {13, 'B', "Some text"};
struct myStructure s2;

s2 = s1;
                       Modify Values
  If you want to change/modify a value, you can use the dot syntax (.).

 And to modify a string value, the strcpy() function is useful again:

Example:
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

int main() {
  // Create a structure variable and assign values to it
  struct myStructure s1 = {13, 'B', "Some text"};

  // Modify values
  s1.myNum = 30;
  s1.myLetter = 'C';
  strcpy(s1.myString, "Something else");

  // Print values
  printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

  return 0;
}
Modifying values are especially useful when you copy structure values:

Example-
// Create a structure variable and assign values to it
struct myStructure s1 = {13, 'B', "Some text"};

// Create another structure variable
struct myStructure s2;

// Copy s1 values to s2
s2 = s1;

// Change s2 values
s2.myNum = 30;
s2.myLetter = 'C';
strcpy(s2.myString, "Something else");

// Print values
printf("%d %c %s\n", s1.myNum, s1.myLetter, s1.myString);
printf("%d %c %s\n", s2.myNum, s2.myLetter, s2.myString);
Ok, so, how are structures useful?
Imagine you have to write a program to store different information about Cars, such as brand, model, and year. What's great about structures is that you can create a single "Car template" and use it for every cars you make. See below for a real life example.

                  *Real-Life Example*
 Use a structure to store different information about Cars:

Example:
struct Car {
  char brand[50];
  char model[50];
  int year;
};

int main() {
  struct Car car1 = {"BMW", "X5", 1999};
  struct Car car2 = {"Ford", "Mustang", 1969};
  struct Car car3 = {"Toyota", "Corolla", 2011};

  printf("%s %s %d\n", car1.brand, car1.model, car1.year);
  printf("%s %s %d\n", car2.brand, car2.model, car2.year);
  printf("%s %s %d\n", car3.brand, car3.model, car3.year);

  return 0;
} */
