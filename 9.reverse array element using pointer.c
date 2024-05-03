



    /* Assignment => 20 ;pointers

    write a program  to  print the  element in an array in reverse order
    using pointers

    */

    #include<stdio.h>
    int main()
    {
    int arr[10],*arr2;
      printf("Enter a 10 element :");
      for(int i=0 ; i<10 ; i++)
      scanf("%d",&arr[i]);
      arr2=arr;
       for(int i=9;i>=0;i--)
       {
         printf("%d ",arr2[i]);
       }
      return 0;

    }
