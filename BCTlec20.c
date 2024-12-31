                //BCT Lecture 020
                //Function Introduction..


 /*  4 important things:
      1.Function Name
      2.Input/Arguments/Parameters
      3.Return Data type
      4.Function Body

      Declaration method:

          return_data_type func_name(input 1,input 2,....){

                //your calculation
                //do your other stuffs
          return result;

          }


        // Ek e kaj jokon bar bar korer dorker tokon Function use kora hoi...
        // Proyojon onujayi call kore use korbo...

          int get_sum (int x,int y){

             int sum = x + y;
             return sum;

          }

                void say_hi (){ // void mane faka (no return)...

                   printf("Hi");

                }
                   int main(perameter) ......return type int  ....function....(perameter)

                 */





 #include<stdio.h>

   int get_sum (int x, int y){

        int sum = x+y;
        return sum;
   }

     void say_hi(){
       printf("Hi\n");
     }

  int main (){ //main function..

        printf("Main start\n");

         say_hi();


          int result = get_sum(10, 20);

            printf("My sum :  %d\n", result);


  return 0;

}
