



    /* Assignment => 20 ;pointers

    write a program  to  compute the sum of all element in an array using pointers

    */

    #include<stdio.h>
    int main()
    {
    int arr[10],*arr2,sum=0;
      printf("Enter a 10 element :");
      for(int i=0 ; i<10 ; i++)
      scanf("%d",&arr[i]);
      arr2=arr;
       for(int i=0;i<10;i++)
       {
         sum +=arr2[i];
       }
       printf("Sum is %d",sum);
      return 0;

    }
