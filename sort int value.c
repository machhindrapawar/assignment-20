






    /* Assignment => 20 ;pointers

    write a function to sort an array of int type value .[void sort(int *ptr , int suze )
     10,60,20,40,30,70,30,49,50 ]

    */
    #include<stdio.h>
    #include<string.h>
void sort(int *ptr, int size)
    {
       int i,j,temp=0;
       for(i=0 ; i<=size-1; i++)
       {
         for(j=i+1;j<=size-1; j++)
         {
             if(ptr[i]>(ptr[j]))
                {
                 temp=ptr[i];
                 ptr[i]=ptr[j];
                 ptr[j]=temp;
                }
         }
       }
    }
      int main()
    {
    int A[]={10,20,30,40,50,60,70,80,90,100};
      sort(A,10);
      for(int i=0; i<=9 ;i++)
      printf("%d  ",A[i]);
       return 0;
    }
