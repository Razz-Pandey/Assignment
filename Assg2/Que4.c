#include<stdio.h>  
 int main()    
{    
int a,b;
printf("Please Enter two numbers to swap");
scanf("%d%d",&a,&b);      
printf("Before swaping a=%d b=%d",a,b);      
a=a+b;   
b=a-b;  
a=a-b; 
printf("\nAfter swaping a=%d b=%d",a,b);    
return 0;  
}   