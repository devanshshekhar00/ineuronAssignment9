
#include <stdio.h>

int main()
{
  int num,k;
  
   printf("Enter electricity\t");
   scanf("%d",&num);
   if(num > 0)
   {
       k = 1;
   }
   else if(num < 0)
   {
       k = 2;
   }
   
   switch(k)
   {
       case 1:
        printf("%d" ,num - (2*num));
        break;
       case 2:
        printf("%d" ,num + (2*-num));
        break;
       
        printf("Invalid input");
        
        break;
        
   }
   
    return 0;
}
