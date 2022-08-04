
#include <stdio.h>

int main()
{
  int num,k;
  
   printf("Enter number\t");
   scanf("%d",&num);
   if(num%2 == 0)
   {
       k = 1;
   }
   
   
   switch(k)
   {
       case 1:
        printf("%d" ,num+1);
        break;
     
       default:
        printf("Invalid input");
        
        break;
        
   }
   
    return 0;
}
