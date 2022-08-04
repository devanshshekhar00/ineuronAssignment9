
#include <stdio.h>

int main()
{
  int electricity,k;
   printf("Enter electricityr\t");
   scanf("%d",&electricity);
   if(electricity <= 50)
   {
       k = 1;
   }
   else if(electricity >50 && electricity <=150)
   {
      k = 2;
       
   }
   else if(electricity > 100 && electricity <=250)
   {
       k = 3;
   }
   else 
   {
       k = 4;
   }
   switch(k)
   {
       case 1:
        printf("rs 0.50 ");
        break;
       case 2:
        printf("rs 0.75");
        
        break;
        case 3:
        printf("rs 1.20");
        
        break;
        case 4:
        printf("rs 1.50");
        
        break;
       default:
        printf("Invalid input");
        
        break;
        
   }
   
    return 0;
}
