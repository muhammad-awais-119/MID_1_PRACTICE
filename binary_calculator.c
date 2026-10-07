#include<stdio.h>
int main (){
    int binary[8];
    int num=0,x=0,i=0;
    printf("enter a number less than 256 to convert it into 8 bit binary number ");
    scanf("%d",&num);
    //printf("%d",num);
    for (int i = 0; i < 8; i++)
    {
        x=num%2;
        binary[i]=x;
        //printf("\n%d",binary[i]);
        num=num/2;
    }

    for (int i = 7; i >=0; i=i-1)
    {
        printf("%d",binary[i]);
    }
    
    
    
    
    return 0;
}