// c program to print alphabet triangle.
#include <stdio.h>
#include<conio.h>
 int main()
{  
int alpha=97;
int i,j,k,m;    
 
for(i=1; i<=5; i++)    
{   
for(j=5; j>=i; j--)    
printf(" ");  
 
for(k=1; k<=i; k++)    
printf("%c",alpha++);
alpha--;   
 
for(m=1; m<i; m++)    
printf("%c",--alpha);    
printf("\n");    
alpha=97;    
}    
return 0;
}