#include <stdio.h>
#include <stdbool.h>
int main (){
    int num=9999,x=0,y=0,count=0;
    bool flag=true;
    while (flag==true)
    {
        x=num%10;
        count++;
        printf("\n%d",x);
        num=num/10;
        printf("\n%d",num);
        if (num==0)
        {
            flag=false;
            
        }
        
        
    }
    printf("\n%d",count);
    
    



 return 0;
}