





    /* Assignment => 20 ;pointers

    write a function to swap  string of two char array of calling functions .(TSRS)

    */
    #include<stdio.h>
    #include<string.h>
    void swap(char *str,char *str2)
    {
         char s[10];
         strcpy(s,str);
         strcpy(str,str2);
         strcpy(str2,s);

    }
      int main()
    {
      char str[10]="pawar",str2[10]="jadav";


      // strcpy(s,str);
      // strcpy(str,str2);
      // strcpy(str2,s);

       swap(str,str2);
       printf("swaping is str=%s str2=%s",str,str2);
       return 0;
    }
