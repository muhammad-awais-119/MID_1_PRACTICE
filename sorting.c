#include <stdio.h>
int main (){
    int size=0;
    printf("enter size of array ");
    scanf("%d",&size);
   int num[size]={},x=0,temp=0;
   for ( int i = 0; i < size; i++)
   {
    printf("enter a number ");
    scanf("%d",&num[i]);
   }

   for ( int i = 0; i <size; i++)
   {
    for ( int j = 1+i; j < size; j++)
    {
        if (num[i]>num[j]) 
        {
            temp=num[i];
            num[i]=num[j];
            num[j]=temp;
        }
    }
   }
   for ( int i = 0; i <size ; i++)
   {
    printf("\n%d",num[i]);
   }
    return 0;
}