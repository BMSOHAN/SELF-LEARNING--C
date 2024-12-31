                 //BCT Lecture 18
                    //Array Operations


    // problems..

   #include<stdio.h>
    int main(){


  /* int a[10],i,sum;

    printf("Enter the values of Array:\n");
     for(i=0;i<10;i++){ //loop use for the index values.
        scanf("%d",&a[i]);

     }
       for(i=0;i<10;i++){
        sum = sum + a[i];

       }

        printf("sum of the Array: %d\n",sum);

    int a[7]= {-99,45,100,37,89,-327,245};

      int max = a[0],i;

       for(i=1;i<7;i++){ //i = not 0,cz its already consider in maximum.
         if (a[i]> max)
            max = a[i];

       }
     printf("Max value is:%d\n",max);*/


       int a[5],i, even_sum =0, odd_sum =0;


         for(i=0;i<5;i++){
            scanf("%d",&a[i]);

         }
            printf("value of Array: ");


           for(i=0;i<5;i++){
              printf("%d",a[i]);

               if(a[i]%2==0)
                 even_sum = even_sum + a[i];

                  else
                     odd_sum = odd_sum + a[i];

           }


            printf("\nSum of odd values: %d\n",odd_sum);
            printf("\nSum of even values: %d\n",even_sum);


  return 0;


    }
