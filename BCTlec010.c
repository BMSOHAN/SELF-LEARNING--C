                    //BCT Lecture 10
                      //Operators,Precedence & Associativity.

          // x=y+z; Operator:+,=; Operand:x,y,z
          // y=5-5; Operator:-,=; Operand:y,5,5

        //**Arithmetic Operators**:These are the operators used to perform arithmetic/mathematical operations on operands.
                                 // Examples:(+,-,*,/,%,++,--).

               // Arithmetic Operators are two types:
                  // 1.Unary Operators:....Operates or works with a single operand.For exmple(z++,-x,++x).
                  // 2.Binary Operators:...operates or works with two operands...(+,-,*,/)..[x=y+z].


       //**Relational Operators**:...Used for "Comparison" of the value of "Two Operands".
                                   // For Exmple:(==,>,>=,<==,<,!=).

       //**Logical Operators**:...Used to combine two or more conditions/constraints or to complement the evalution of the original condition in consideration.
                                // The of the operation of a logical operator is a boolean value eiher True or False.
                                        //Example:(&&,||,!),,,[&&=AND,||=OR,!=NOT].

       //**Assingment operators**:...Used to assign value to a Variable.(=,+=,-=,*=,/=,%=,&=,>>=,<<=,^=)

       //**Bitwise operatos**:...(&,|,^,>>,<<,~),,,[&=AND,|=OR,^=XOR,~=NOT,>> = Right Shift,<< = Left Shift].

       //**Ternery  "** :......(?:).
                 //Precedence and Associativity : x=4+3*4/2-7=4+12/2-7=4+6-7=10-7= -3 [Start Left to Right].
                            //Follow the charts,,,

 #include<stdio.h>
    int main (){

  /* int a = 5;
   // a=a+40;
    // a+=10;//(a+10=5+10=15)
     // a-=10;//(5-10=-5)
    // --a;//(5-1=4)// Pre decrement
      // a--;//(5-1=4)//Post decrement
       // a++;//(5+1=6) //a+1 //Post increment
       // ++a;//(5+1=6)//a+1 //Pre increment

    printf("Value of a is: %d\n",a); */

              /*  //Post increment a porer line theke maan increase hoy kintu nijer line er maan change hoy na.
    int x = 5;
     printf("Value of x is: %d\n",x++);//5- 6..but value is 5 ; x++ = post incri..
      printf("Value of x is: %d\n",++x);//6- 7..value&print is 7 ; ++x = pre incri..

        x = 5;
        printf("value of x: %d\n",++x);//6- 6
         printf("value of x: %d\n",x++);//6- 7....but print 6 bcz post incri...*/



      /*  if(5 > 10-5 && 5){//5> 5 && 5 // 0&&5 //0 // False.
            printf("Hi!\n");
        } else {
           printf("Hello#");
        } */

   /*  if (1==2 !=0){ // 0!=0 //0 //False. [1=True]
        printf("Hi!\n");
     }else {
        printf("Hello#");
     } */

  return 0;
       }
