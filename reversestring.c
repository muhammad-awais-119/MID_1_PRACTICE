#include <stdio.h>
#include<string.h>
int main(){
    int x=0,a=0;
    char string[25],reverse_string[25];
    printf("enter your string ");
    scanf(" %s",string);
    
    x=strlen(string);
   
    for (int i = x-1; i >=0 ; i=i-1)
    {
        printf("\n%c",string[i]);
        reverse_string[a]=string[i];
        printf("\n%c",reverse_string[a]);
        a++;
    }
    
    printf("\n%s",reverse_string);
    if (strcmp(reverse_string,string)==0)
    {
        printf("palendrom");
    }
    






    return 0;
}