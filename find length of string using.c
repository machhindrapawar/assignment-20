









    /* Assignment => 20 ;pointers

    write a program  to  calculate the length of the string using a pointer

    */

    #include<stdio.h>
    int main()
    {
      char str[]="machhindra",*ptr;
      int i=0;
      ptr=str;
      while(*ptr!='\0')
      {
          i++;
          ptr++;
      }
      printf("the length of string is %d",i);
      return 0;


    }
