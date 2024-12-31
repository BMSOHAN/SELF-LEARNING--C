                    //BCT Lecture 19
                      //2D-Array

   // its Like a Matrix..
    // Nested Loop needed..

    // DataType ArrayName[row][column];

      // Row jabe Dan(Right) e , Column Nambe Niche..
         // Total Capacity of 2D Array = ( row x column )

    // 1 0 0
    // 0 1 0
    // 0 0 1
     // int matrixA [3][3];


       // col=0 col=1 col=2 col=3
       // 1      0      0     1 .....(Row 0)
       // 0      1      0     1 .....(Row 1)
            //int matrixB[2][4];


   // int x[2][3] = {11,12,13,21,22,23};or {{11,12,13},{21,22,23}}
   // printf("%d",x[1][2]); // output:23

        //cl0 cl1 cl2
       // 11  12  13...row 0
       // 21  22  [23]...row 1

    /*.....Traversing 2D Array....

       int a[2][3]= {11,12,13,21,22,23};
         for(i=0;i<2;i++){ //loop for Row
            for(j=0;j<3;j++){ //loop for column
                printf("%d\n",a[i][j]);
            }
         } */


    #include<stdio.h>
     int main(){

    /*   int x[2][3] = {11,12,13,
                      21,22,23};

           printf("%d\n", x[1][2]);
            printf("%d\n", x[0][0]);

        int y = x[0][0] + x[1][1];
          printf("value of y: %d\n", y); */


      // problems..

    int a[3][3],i,j,sum=0;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }


        for(i=0;i<3;i++){
         for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
             sum = sum + a[i][j];
        }

          printf("\n");
    }

        float average = sum/9.0;
         printf("Average is: %.2f",average);


   return 0;

     }

