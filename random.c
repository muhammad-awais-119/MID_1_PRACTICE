#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){
    time_t c;
    time(&c);
    printf("%s",ctime(&c));
    srand(time(NULL));
    int dice_num =(rand()%6)+1;
    

    return 0;
}