#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int q=1, n=1;
    srand(time(0));
    do{
       
       
       n=rand()%100; 
       q=1+rand()%100;
        printf("%d\n", n); 
        printf("%d\n", q);
        if(q==n){
         break;  
       }
    }while(n<1&&n>100);
    
       return 0;
    }
    