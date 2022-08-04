#include <stdio.h>

int main()
{
   int daynumber;
   printf("Enter day number\t");
   scanf("%d",&daynumber);
   switch(daynumber)
   {
        
       case 1:
        printf("Happy monday");
        break;
       case 2:
         printf("Happy tuesday");
         break;
        case 3:
        printf("Happy wednesday");
        break;
        case 4:
        printf("Happy thursday");
        break;
        case 5:
          printf("Happy friday");
          break;
        case 6:
         printf("Happy Saturday");
          break;
        case 7:
         printf("Happy Sunday");
          break;
        
   }

    return 0;
}
