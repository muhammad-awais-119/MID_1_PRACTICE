#include <stdio.h>
#include <stdbool.h>
int main (){
     int num,reverse=0,count=0,i,j,x,temp,ten=1;
     bool flag=true;
     printf("enter a number");
     scanf("%d",&num);
     temp=num;
     while (flag==true)
     {
        x=temp%10;
        count++;
        temp=temp/10;
        if (temp==0)
        {
            flag=false;
        }
     }
     printf("%d",count);
     for ( i = 0; i < count-1; i++)
     {
        ten=ten*10;
     }
     printf("\n%d",ten);
     temp=num;
     for ( i = 0; i < count; i++)
     {
        x=temp%10;
        x=x*ten;
        reverse=reverse+x;
        ten=ten/10;
        temp=temp/10;
        if (temp==0)
        {
            break;
        }
        
     }
     printf("\n%d",reverse);
     if (reverse==num)
     {
        printf("\npalendrom");
     }
     
     
     

    return 0;
}