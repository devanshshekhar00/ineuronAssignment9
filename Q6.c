
#include <stdio.h>

int main()
{
  int year ; int k;
   printf("Enter year\t");
   scanf("%d",&year);
   if(year%4 == 0)
   {
       k = 1;
   }
   else
   {
      k = 2;
       
   }
   switch(k)
   {
       case 1:
        printf("Leap year ");
        break;
       case 2:
        printf("not Leap year");
        
        break;
       default:
        printf("Invalid input");
        
        break;
        
   }
   
    return 0;
}
