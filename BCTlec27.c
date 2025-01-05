                 //BCT Lecture 27
                // Pointer with Array & Function

      // %u - unsigned integer
      // %x - hexadecimal value
      // %p - void pointer


   /* #include<stdio.h>
     int main(){

   // int a[5]={1,2,3,4,5};
    int i,sum = 0;
    for(int i = 0; i<5; i++){
           // printf("%d ", *(a+i)); // 1 2 3 4 5
      //  printf("%u\n, &a[i]");
     // sum = sum + *(a + i);// sum = 15
    }
   //  printf("Address of a: %u\n",a); // address of 1

   // printf("sum = %d\n",sum); */

 /*   int *ptr = &a[3];
     printf("%d\n", *(ptr));
     printf("%d\n", *(ptr + 1));
     printf("%d\n", *(ptr - 1));

return 0; */


   #include<stdio.h>
  /* void swap(int *n1,int *n2){
        int temp = *(n1);
        *(n1) = *(n2);
        *(n2) = temp;
    }

    int main(){

    int num1 = 5, num2 = 10;
    printf("num1 = %d ; num2 = %d\n",num1,num2);

     swap(&num1, &num2);
    printf("num1 = %d ; num2 = %d\n",num1,num2);

    } */

    int sum(int *a,int size){
     int i, sum = 0;
     for(i=0;i<size;i++){
        sum = sum + *(a+i);
     }
      return sum;
    }

    int main(){
      int arr[3] = {5,5,10};
      int result = sum(arr,3);
      printf("Sum of Array is:%d",result);

    }

