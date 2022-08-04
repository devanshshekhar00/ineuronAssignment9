#include <stdio.h>

int main()
{
   int monthNumber;printf("Enter month number\t");
   scanf("%d",&monthNumber);
   switch(monthNumber)
   {
       case 1 ... 7:
        if(monthNumber%2==0)
        {
            printf("30 days");
            break;
        }
        else 
        {
            printf("31 days");
            break;
        }
       case 8 ... 12:
        if(monthNumber%2!=0)
        {
            printf("30 days");
            break;
        }
        else 
        {
            printf("31 days");
            break;
        }
        
   }

    return 0;
}
