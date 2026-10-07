#include <stdio.h>
#include<string.h>
#include <stdlib.h>
int main (){
    char num[25];
    int x,ten=1,y=0,reverse=0;
    printf("enter anmuber ");
    scanf("%s",num);
    printf("%s",num);
    x=strlen(num);
    for (int i = 0; i < x-1; i++)
    {
        ten=ten*10;
    }
    printf("\n%d",ten);
    int num2=atoi(num);
    printf("\n%d",num2);
    for (int i = x-1; i >=0 ; i=i-1)
    {
        y=num2%10;
        reverse=reverse+(y*ten);
        ten=ten/10;
        num2=num2/10;
        if (num2==0)
        {
            break;
        }
        
    }
    printf("\n%d",reverse);
    
    




    return 0;
}