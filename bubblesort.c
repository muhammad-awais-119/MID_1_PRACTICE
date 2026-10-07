#include <stdio.h>
#include <stdbool.h>

int main (){
    bool noswap=false;
    int array[5]={100,3,77,0,5},temp,x=0,n=0;
    x=sizeof(array)/sizeof(array[0]);
    n=x-1;
    while (noswap==false)
    {
        noswap=true;
        for (int i = 0; i < n; i++)
        {
            if (array[i]<array[i+1])//asending order ">" descending order "<"
            {
                temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
                noswap=false;
            }
            
        }
        n=n-1;
        
    }
    for ( int i = 0; i <5 ; i++)
   {
    printf("\n%d",array[i]);
   }
    
    
    

    return 0;
}