               //BCTlecture04

   //float=single precision floating number ....sizeof(float)[(4byte)]
      //double=double precision floating number....sizeof(double)[(8byte)]
                   //[float=%f]&[double=%lf]
#include<stdio.h>
int main (){

       /* float a=5.5;
        float b=3.3;

        printf("Result : %f\n", a/b);

        printf("Result 2 : %.3f\n", a/4*b);*/


       /* float a=4/3.0;   //[int/int=always whole number(purnosonka)]...
                       // so must use point [x.yz]




        printf("value of a:%.2f\n",a);*/



            double x,y,z;
            x= 10;
            y = 12;
             z=30;

           printf("Production: %.3lf\n",x*z*y);

           printf("Production: %.3lf\n",x*y/z);


return 0;



}
