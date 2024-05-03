



    /* Assignment => 20 ;pointers

    write a program  to print a string in reverse order  in an array using pointers

    */

    #include<stdio.h>
    #include<string.h>
    int main()
    {
    char str[10],*str2;
      printf("Enter a string :");
      fgets(str,10,stdin);
      str2=str;

       for(int i=strlen(str2)-1; str2[i]>0 ; i--)
       {
           printf("%c",str2[i]);

      }
      return 0;
    }
