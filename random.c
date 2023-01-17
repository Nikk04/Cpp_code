

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, n;
    printf("programma che genera  numeri compresi tra -100  a 100");
    
    while(n<-100&&n>100){
    n = rand()%100;
        printf("%d\n", n); 	
	} 
           
    
    return 0;
}
