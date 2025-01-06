                        //BCT Lecture 28
                        // File in C programming

        // File operations :open->write->Read->Close

    //When working with files,you need to declare a pointer to type file:FILE *fp;


 /* File Open: fp = fopen("fileopen","mode");
               File Mode: r,w,a,r+,w+,a+

    File Write: fputc(int c,FILE *fp);

                fprintf(FILE *fp,string format..)

                fputs(const char *s,FILE *fp);

    File Read:  int c = fgetc()

                char buff[100]
                fscanf(fp,"%s",buff);

                fgets(buff,255,(FILE*)fp);

    File Close: fclose(fp); */


    #include<stdio.h>
      int main(){


    FILE *fp;
    // fp = fopen("test_file.txt","w");

   //  fp = fopen("test_file.txt","a");

     fp = fopen("test_file.txt","r");

    // fp = fopen("test_file.txt","a+");


    /* int i;
     for(int i = 65; i<91; i++){
        fputc(i, fp);
     }

    char arr[100] = "Hi, I am SOHAN!!";
     fputs(arr, fp);


    fprintf(fp, "My id is: %d\n", 20); */


    int c;
    c = fgetc(fp);
     printf("The char is: %c\n", c); // amader file er first char ta print korbe.

     char buff[100];
     fscanf(fp, "%s", buff);
     printf("The data in buffer is: %s\n", buff);


    fgets(buff, 5, fp);
    printf("The data is buffer is: %s\n", buff);

    fgets(buff, 500, fp);
    printf("The data is buffer is: %s\n", buff);

    fgets(buff, 500, fp);
    printf("The data is buffer is: %s\n", buff);

     fclose(fp);


    return 0;

      }


